/*
** EPITECH PROJECT, 2020
** main
** File description:
** UI
*/

#include "my_UI.h"

int button_is_clicked(button_t *button, sfVector2f click_position,
sfVector2f click_size, sfRenderWindow *window)
{
    sfEvent event;
    sfVector2f pos_button;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseButtonPressed) {
            printf("x1 = %f, y1 = %f\n", click_position.x + click_size.x, click_position.y + click_size.y);
            printf("x2 = %f, y2 = %f\n", click_position.x, click_position.y);
            printf("a = %f\n", button->a);
            if (button->a <= click_position.x /*+ click_size.x /*&&
            event.mouseMove.x >= click_position.x /*&& event.mouseMove.y <=
            click_position.y + click_size.y && event.mouseMove.y >=
            click_position.y*/)
                printf("OK\n");
        }
        if (event.type == sfEvtMouseMoved) {
            button->a = event.mouseMove.x;
            button->b = event.mouseMove.y;
            printf("xsouris = %f, ysouris = %f\n", button->a, button->b);
        }
    }
}

void print_hello(button_t *button, sfRenderWindow *window)
{
    sfVector2f click_position = sfRectangleShape_getPosition(button->canon);
    //printf("x = %f, y = %f\n", click_position.x, click_position.y);
    sfVector2f click_size = sfRectangleShape_getSize(button->canon);
    //printf("x2 = %f, y2 = %f\n", click_size.x, click_size.y);
    button_is_clicked(button, click_position, click_size, window);
}

void init_button(button_t *button_t, sfVector2f position, sfVector2f size)
{
    button_t->a = -1;
    button_t->b = -1;
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
    init_button(&button, pos, size);
    while (sfRenderWindow_isOpen(window)) {
        /*while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }*/
        sfRenderWindow_display(window);
        sfRenderWindow_drawRectangleShape(window, button.canon, NULL);
        print_hello(&button, window);
    }
    sfRenderWindow_destroy(window);
    return EXIT_SUCCESS;
}