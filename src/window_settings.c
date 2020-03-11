/*
** EPITECH PROJECT, 2020
** sdfgh
** File description:
** sdfgh
*/

#include "../include/my.h"

int button_settings_clicked(menu_t *menu, Index_t *index,
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
        if (event.type == sfEvtMouseButtonPressed) {
            is_plus(menu, index, window);
            is_minus(menu, index, window);
            is_plus2(menu, index, window);
            is_minus2(menu, index, window);
            is_back(menu, window);
        }
    }
}

void settings_loop(sfRenderWindow *window, menu_t *menu, Index_t *index)
{
    sfRenderWindow_drawSprite(window, menu->image.spri_settings, NULL);
    sfRenderWindow_drawText(window, menu->text_settings.txt_music, NULL);
    sfRenderWindow_drawText(window, menu->text_settings.txt_sound, NULL);
    sfRenderWindow_drawText(window, menu->text_settings.txt_value_music, NULL);
    sfRenderWindow_drawText(window, menu->text_settings.txt_value_sound, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->button.button_plus, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->button.button_minus, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->button.button_plus2, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->button.button_minus2, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->button.button_back, NULL);
    sfRenderWindow_drawText(window, menu->text_settings.txt_plus, NULL);
    sfRenderWindow_drawText(window, menu->text_settings.txt_minus, NULL);
    sfRenderWindow_drawText(window, menu->text_settings.txt_plus2, NULL);
    sfRenderWindow_drawText(window, menu->text_settings.txt_minus2, NULL);
    sfRenderWindow_drawText(window, menu->text_settings.txt_go_home, NULL);
    push_plus(menu, index, window);
    push_plus2(menu, index, window);
    push_minus(menu, index, window);
    push_minus2(menu, index, window);
    push_back(menu, index, window);
}

void free_settings(menu_t *menu)
{
    free(menu->text_settings.txt_music);
    free(menu->text_settings.txt_sound);
    free(menu->text_settings.txt_value_music);
    free(menu->text_settings.txt_value_sound);
    free(menu->text_settings.txt_plus);
    free(menu->text_settings.txt_minus);
    free(menu->text_settings.txt_plus2);
    free(menu->text_settings.txt_minus2);
    free(menu->text_settings.txt_go_home);
}

void window_settings(menu_t *menu, Index_t *index, sfRenderWindow *window)
{
    sfMusic_stop(index->sound.music);
    init_text_settings(menu, index);
    init_button_settings(menu);
    menu->image.text_settings = sfTexture_createFromFile
    ("assets/UI/game_menu.png", NULL);
    menu->image.spri_settings = sfSprite_create();
    sfSprite_setTexture(menu->image.spri_settings,
    menu->image.text_settings, sfTrue);
    while (menu->player_choice == 4) {
        settings_loop(window, menu, index);
        sfRenderWindow_display(window);
    }
    //free_settings(menu);
}