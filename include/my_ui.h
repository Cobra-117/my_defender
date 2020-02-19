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

void push_play(button_t *button, sfRenderWindow *window);

void push_exit(button_t *button, sfRenderWindow *window);

void push_htp(button_t *button, sfRenderWindow *window);

void push_param(button_t *button, sfRenderWindow *window);

void init_button_play(button_t *button);

void init_button_exit(button_t *button);

void init_button_htp(button_t *button);

void init_button_param(button_t *button);

int button_is_clicked(button_t *button, sfRenderWindow *window);

int is_play(button_t *button, sfRenderWindow *window);

int is_exit(button_t *button, sfRenderWindow *window);

int is_htp(button_t *button, sfRenderWindow *window);

int is_param(button_t *button, sfRenderWindow *window);

int main_menu(sfRenderWindow *window);

void prepare_text_play(text_t *text);

void prepare_text_exit(text_t *text);

void prepare_text_htp(text_t *text);

void prepare_text_param(text_t *text);