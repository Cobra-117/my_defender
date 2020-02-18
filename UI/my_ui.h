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
    sfRectangleShape *button_exit;
    sfVector2f pos_exit;
    sfVector2f size_exit;
    sfVector2f click_pos_play;
    sfVector2f click_size_play;
    sfVector2f click_pos_exit;
    sfVector2f click_size_exit;
    float a;
    float b;
};

typedef struct button_s button_t;

struct image_s {
    sfTexture *text_menu;
    sfSprite *spri_menu;
};

typedef struct image_s image_t;

void push_play(button_t *button, sfRenderWindow *window);
void push_exit(button_t *button, sfRenderWindow *window);
void init_button_play(button_t *button);
void init_button_exit(button_t *button);
int button_is_clicked(button_t *button, sfRenderWindow *window);