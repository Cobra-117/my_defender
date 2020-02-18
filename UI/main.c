/*
** EPITECH PROJECT, 2020
** main
** File description:
** UI
*/

#include "my_ui.h"

int button_is_clicked(button_t *button, sfRenderWindow *window)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseMoved) {
            button->a = event.mouseMove.x;
            button->b = event.mouseMove.y;
        }
        if (event.type == sfEvtMouseButtonPressed) {
            is_play(button, window);
            is_exit(button, window);
            is_htp(button, window);
            is_param(button, window);
        }
    }
}

void game_menu(button_t *button, image_t *image, text_t *text,
sfRenderWindow *window)
{
    sfSprite_setTexture(image->spri_menu, image->text_menu, sfTrue);
    sfRenderWindow_drawSprite(window, image->spri_menu, NULL);
    sfRenderWindow_drawRectangleShape(window, button->button_play, NULL);
    sfRenderWindow_drawRectangleShape(window, button->button_exit, NULL);
    sfRenderWindow_drawRectangleShape(window, button->button_htp, NULL);
    sfRenderWindow_drawRectangleShape(window, button->button_param, NULL);
    sfRenderWindow_drawText(window, text->txt_play, NULL);
    sfRenderWindow_drawText(window, text->txt_exit, NULL);
    sfRenderWindow_drawText(window, text->txt_htp, NULL);
    sfRenderWindow_drawText(window, text->txt_param, NULL);
    push_play(button, window);
    push_exit(button, window);
    push_htp(button, window);
    push_param(button, window);
}

void init_text_button(button_t *button, text_t *text)
{
    init_button_play(button);
    init_button_exit(button);
    init_button_htp(button);
    init_button_param(button);
    prepare_text_play(text);
    prepare_text_exit(text);
    prepare_text_htp(text);
    prepare_text_param(text);
}

int main(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* window;
    sfEvent event;
    button_t button;
    image_t image;
    text_t text;

    window = sfRenderWindow_create(mode, "", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    init_text_button(&button, &text);
    image.text_menu = sfTexture_createFromFile("game_menu.png", NULL);
    image.spri_menu = sfSprite_create();
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        game_menu(&button, &image, &text, window);
    }
    sfRenderWindow_destroy(window);
    return EXIT_SUCCESS;
}
