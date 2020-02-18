/*
** EPITECH PROJECT, 2020
** main
** File description:
** UI
*/

#include "my_ui.h"

int is_play(button_t *button, sfRenderWindow *window)
{
    if (button->a <= button->click_pos_play.x + button->click_size_play.x &&
        button->a >= button->click_pos_play.x && button->b <=
        button->click_pos_play.y + button->click_size_play.y && button->b >=
        button->click_pos_play.y)
            printf("play\n");
}

int is_exit(button_t *button, sfRenderWindow *window)
{
    if (button->a <= button->click_pos_exit.x + button->click_size_exit.x &&
        button->a >= button->click_pos_exit.x && button->b <=
        button->click_pos_exit.y + button->click_size_exit.y && button->b >=
        button->click_pos_exit.y)
            printf("exit\n");
}

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
        }
    }
}

void game_menu(button_t *button, image_t *image, sfRenderWindow *window)
{
    sfSprite_setTexture(image->spri_menu, image->text_menu, sfTrue);
    sfRenderWindow_drawSprite(window, image->spri_menu, NULL);
    sfRenderWindow_drawRectangleShape(window, button->button_play, NULL);
    sfRenderWindow_drawRectangleShape(window, button->button_exit, NULL);
    push_play(button, window);
    push_exit(button, window);
}

int main(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* window;
    sfEvent event;
    button_t button;
    image_t image;

    window = sfRenderWindow_create(mode, "", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    init_button_play(&button);
    init_button_exit(&button);
    image.text_menu = sfTexture_createFromFile("game_menu.png", NULL);
    image.spri_menu = sfSprite_create();
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
        game_menu(&button, &image, window);
    }
    sfRenderWindow_destroy(window);
    return EXIT_SUCCESS;
}
