/*
** EPITECH PROJECT, 2020
** sdfgh
** File description:
** sdfgh
*/

#include "../include/my.h"

int button_settings_clicked(menu_t *menu, sfRenderWindow *window)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseMoved) {
            menu->button.a = event.mouseMove.x;
            menu->button.b = event.mouseMove.y;
        }
        if (event.type == sfEvtMouseButtonPressed) {
            is_plus(menu, window);
            is_minus(menu, window);
        }
    }
}

void settings_loop(sfRenderWindow *window, menu_t *menu)
{
    sfRenderWindow_drawSprite(window, menu->image.spri_settings, NULL);
    sfRenderWindow_drawText(window, menu->text_settings.txt_music, NULL);
    sfRenderWindow_drawText(window, menu->text_settings.txt_sound, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->button.button_plus, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->button.button_minus, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->button.button_plus2, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->button.button_minus2, NULL);
    push_plus(menu, window);
    push_plus2(menu, window);
    push_minus(menu, window);
    push_minus2(menu, window);
}

void window_settings(menu_t *menu, sfRenderWindow *window)
{
    init_text_settings(menu);
    init_button_settings(menu);
    menu->image.text_settings = sfTexture_createFromFile
    ("assets/UI/game_menu.png", NULL);
    menu->image.spri_settings = sfSprite_create();
    sfSprite_setTexture(menu->image.spri_settings,
    menu->image.text_settings, sfTrue);
    while (menu->player_choice == 4) {
        settings_loop(window, menu);
        sfRenderWindow_display(window);
    }
}