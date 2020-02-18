/*
** EPITECH PROJECT, 2020
** dfghj
** File description:
** jhgfds
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

int is_htp(button_t *button, sfRenderWindow *window)
{
    if (button->a <= button->click_pos_htp.x + button->click_size_htp.x &&
        button->a >= button->click_pos_htp.x && button->b <=
        button->click_pos_htp.y + button->click_size_htp.y && button->b >=
        button->click_pos_htp.y)
            printf("How to play\n");
}

int is_param(button_t *button, sfRenderWindow *window)
{
    if (button->a <= button->click_pos_param.x + button->click_size_param.x &&
        button->a >= button->click_pos_param.x && button->b <=
        button->click_pos_param.y + button->click_size_param.y && button->b >=
        button->click_pos_param.y)
            printf("Setting\n");
}