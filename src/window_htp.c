/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** sdfghjk
*/

#include "../include/my.h"

int button_htp_clicked(menu_t *menu, Index_t *index,
sfRenderWindow *window)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseMoved) {
            menu->button.a = event.mouseMove.x;
            menu->button.b = event.mouseMove.y;
        }
        if (event.type == sfEvtKeyPressed) {
            if (event.key.code == sfKeySpace)
                menu->which_htp++;
            if (event.key.code == sfKeyEscape)
                menu->player_choice = 1;
        }
        if (menu->which_htp > 5)
            menu->which_htp = 0;
    }
}

void htp_loop(sfRenderWindow *window, menu_t *menu, Index_t *index)
{
    if (menu->which_htp == 0)
        sfRenderWindow_drawSprite(window, menu->image.spri_htp, NULL);
    if (menu->which_htp == 1)
        sfRenderWindow_drawSprite(window, menu->image.spri_htp01, NULL);
    if (menu->which_htp == 2)
        sfRenderWindow_drawSprite(window, menu->image.spri_htp1, NULL);
    if (menu->which_htp == 3)
        sfRenderWindow_drawSprite(window, menu->image.spri_htp2, NULL);
    if (menu->which_htp == 4)
        sfRenderWindow_drawSprite(window, menu->image.spri_htp3, NULL);
    if (menu->which_htp == 5)
        sfRenderWindow_drawSprite(window, menu->image.spri_htp4, NULL);
    button_htp_clicked(menu, index, window);
}

void window_htp(menu_t *menu, Index_t *index, sfRenderWindow *window)
{
    init_htp(menu);
    menu->which_htp = 0;
    menu->image.text_htp = sfTexture_createFromFile
    ("assets/UI/How_to_play0.png", NULL);
    menu->image.spri_htp = sfSprite_create();
    sfSprite_setTexture(menu->image.spri_htp,
    menu->image.text_htp, sfTrue);
    while (menu->player_choice == 3) {
        htp_loop(window, menu, index);
        sfRenderWindow_display(window);
    }
}