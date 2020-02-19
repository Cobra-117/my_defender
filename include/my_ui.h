/*
** EPITECH PROJECT, 2020
** my_UI.h
** File description:
** sdfghjkl
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <unistd.h>
#include <SFML/Audio.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Time.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <SFML/System/Export.h>

struct button_s {
    sfRectangleShape *button_play;
    sfVector2f pos_play;
    sfVector2f size_play;
    sfVector2f click_pos_play;
    sfVector2f click_size_play;
    sfRectangleShape *button_exit;
    sfVector2f pos_exit;
    sfVector2f size_exit;
    sfVector2f click_pos_exit;
    sfVector2f click_size_exit;
    sfRectangleShape *button_htp;
    sfVector2f pos_htp;
    sfVector2f size_htp;
    sfVector2f click_pos_htp;
    sfVector2f click_size_htp;
    sfRectangleShape *button_param;
    sfVector2f pos_param;
    sfVector2f size_param;
    sfVector2f click_pos_param;
    sfVector2f click_size_param;
    float a;
    float b;
};

typedef struct button_s button_t;

struct image_s {
    sfTexture *text_menu;
    sfSprite *spri_menu;
};

typedef struct image_s image_t;

struct text_s {
    sfText *txt_play;
    sfFont *font;
    sfVector2f pos_play;
    sfText *txt_exit;
    sfVector2f pos_exit;
    sfText *txt_htp;
    sfVector2f pos_htp;
    sfText *txt_param;
    sfVector2f pos_param;
};

typedef struct text_s text_t;

struct menu_s {
    image_t image;
    button_t button;
    text_t text;
    int player_choice;
};

typedef struct menu_s menu_t;

void push_play(menu_t *menu, sfRenderWindow *window);
void push_exit(menu_t *menu, sfRenderWindow *window);
void push_htp(menu_t *menu, sfRenderWindow *window);
void push_param(menu_t *menu, sfRenderWindow *window);
void init_button_play(menu_t *menu);
void init_button_exit(menu_t *menu);
void init_button_htp(menu_t *menu);
void init_button_param(menu_t *menu);
int button_is_clicked(menu_t *menu, sfRenderWindow *window);
int is_play(menu_t *menu, sfRenderWindow *window);
int is_exit(menu_t *menu, sfRenderWindow *window);
int is_htp(menu_t *menu, sfRenderWindow *window);
int is_param(menu_t *menu, sfRenderWindow *window);
void prepare_text_play(menu_t *menu);
void prepare_text_exit(menu_t *menu);
void prepare_text_htp(menu_t *menu);
void prepare_text_param(menu_t *menu);