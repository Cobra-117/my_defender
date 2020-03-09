/*
** EPITECH PROJECT, 2020
** main
** File description:
** UI
*/

#include "../include/my.h"

sfMusic *init_main_menu_music(Index_t *index)
{
    index->sound.music =
    sfMusic_createFromFile("assets/music/main_menu_music.ogg");

    sfMusic_setLoop(index->sound.music, sfTrue);
    sfMusic_setVolume(index->sound.music, index->sound.volume_music);
    sfMusic_play(index->sound.music);
}

int button_is_clicked(menu_t *menu, sfRenderWindow *window)
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
            is_play(menu, window);
            is_exit(menu, window);
            is_htp(menu, window);
            is_param(menu, window);
        }
    }
}

int game_menu(menu_t *menu, sfRenderWindow *window)
{
    sfSprite_setTexture(menu->image.spri_menu, menu->image.text_menu, sfTrue);
    sfRenderWindow_drawSprite(window, menu->image.spri_menu, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->button.button_play, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->button.button_exit, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->button.button_htp, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->button.button_param, NULL);
    sfRenderWindow_drawText(window, menu->text.txt_play, NULL);
    sfRenderWindow_drawText(window, menu->text.txt_exit, NULL);
    sfRenderWindow_drawText(window, menu->text.txt_htp, NULL);
    sfRenderWindow_drawText(window, menu->text.txt_param, NULL);
    push_play(menu, window);
    push_exit(menu, window);
    push_htp(menu, window);
    push_param(menu, window);
}

void init_text_button(menu_t *menu)
{
    init_button_play(menu);
    init_button_exit(menu);
    init_button_htp(menu);
    init_button_param(menu);
    prepare_text_play(menu);
    prepare_text_exit(menu);
    prepare_text_htp(menu);
    prepare_text_param(menu);
    menu->player_choice = 0;
}

int main_menu(menu_t *menu, Index_t *index, sfRenderWindow *window)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfEvent event;

    init_text_button(menu);
    init_main_menu_music(index);
    init_sound(index);
    make_game_music_created(index);
    menu->image.text_menu = sfTexture_createFromFile
    ("assets/UI/game_menu.png", NULL);
    menu->image.spri_menu = sfSprite_create();
    while (menu->player_choice == 0) {
        game_menu(menu, window);
        sfRenderWindow_display(window);
    }
    sfMusic_pause(index->sound.music);
    return (menu->player_choice);
}
