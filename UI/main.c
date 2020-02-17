/*
** EPITECH PROJECT, 2020
** main
** File description:
** UI
*/

#include "my_UI.h"

int button_is_clicked(button_t *button, sfVector2f click_position,
sfRenderWindow *window)
{
    sfEvent event;
    sfVector2f pos_button;
    int a;
    int b;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseMoved) {
            a = event.mouseMove.x;
            b = event.mouseMove.y;
            printf("%d, %d\n", a, b);
        }
        if (event.type == sfEvtMouseButtonPressed) {
            //pos_button = sfRectangleShape_getPosition(button->canon);
        }
    }
}

void print_hello(sfRenderWindow *window)
{
    button_t *button_t;

    sfVector2f click_position = {50, 50};
    button_is_clicked(button_t, click_position, window);
}

void init_button(button_t *button_t, sfVector2f position, sfVector2f size)
{
    button_t->canon = sfRectangleShape_create();
    sfRectangleShape_setPosition(button_t->canon, position);
    sfRectangleShape_setSize(button_t->canon, size);
    sfTexture *texture = sfTexture_createFromFile("rectangle.png", NULL);
    sfRectangleShape_setTexture(button_t->canon, texture, 0);
}

int main(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* window;
    sfEvent event;
    button_t button;

    sfVector2f pos = {200, 200};
    sfVector2f size = {50, 50};
    window = sfRenderWindow_create(mode, "", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_display(window);
        init_button(&button, pos, size);
        sfRenderWindow_drawRectangleShape(window, button.canon, NULL);
        print_hello(window);
    }
    sfRenderWindow_destroy(window);
    return EXIT_SUCCESS;
}
