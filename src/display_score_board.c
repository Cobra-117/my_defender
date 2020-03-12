/*
** EPITECH PROJECT, 2020
** dfghj
** File description:
** dfghj
*/

#include "../include/my.h"

char *my_strcat_custom(char *a, char *b, char *c)
{
    char *res = malloc(sizeof(char) * (my_strlen(a) + my_strlen(b) +
    my_strlen(c) + 1));
    int i = 0;

    for (i = 0; a[i] != '\0'; i++) {
        res[i] = a[i];
    }
    for (int n = 0; b[n] != '\0'; n++) {
        res[i] = b[n];
        i++;
    }
    for (int l = 0; c[l] != '\0'; l++) {
        res[i] = c[l];
        i++;
    }
    res[i] = '\0';
    return (res);
}

void button_win_clicked(Index_t *index)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(index->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(index->window);
        if (event.type == sfEvtMouseMoved) {
            index->ui.coord_mouse_x = event.mouseMove.x;
            index->ui.coord_mouse_y = event.mouseMove.y;
        }
        if (event.type == sfEvtMouseButtonPressed)
            is_win(index);
    }
}

void win_loop(Index_t *index, int *scoreboard)
{
    sfRenderWindow_drawSprite(index->window,
    index->ui.spri_socle, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_win, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_score_board1, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_score_board2, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_score_board3, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_score_board4, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_score_board5, NULL);
    sfRenderWindow_drawRectangleShape(index->window,
    index->ui_pause_button.button_win, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_back_win, NULL);
    sfRenderWindow_drawText(index->window,
    index->ui_text.txt_now_score, NULL);
}

void make_the_scoreboard(Index_t *index, int *scoreboard)
{
    char **str = malloc(sizeof(char *) * 6);

    for (int i = 0; i < 5; i++) {
        str[i] = my_nbr_to_str(scoreboard[i]);
        str[i] = my_strcat_custom(my_nbr_to_str(i + 1), ". ", str[i]);
    }
    sfText_setString(index->ui_text.txt_score_board1,
    str[0]);
    sfText_setString(index->ui_text.txt_score_board2,
    str[1]);
    sfText_setString(index->ui_text.txt_score_board3,
    str[2]);
    sfText_setString(index->ui_text.txt_score_board4,
    str[3]);
    sfText_setString(index->ui_text.txt_score_board5,
    str[4]);
    sfText_setString(index->ui_text.txt_now_score,
    my_nbr_to_str(index->money));
}

void display_score_board(Index_t *index, int *scoreboard)
{
    index->what_is_open = 100;
    index->ui.pos_socle.x = 0;
    index->ui.pos_socle.y = 0;
    sfSprite_setPosition(index->ui.spri_socle,
    index->ui.pos_socle);
    index->ui.scale_socle.x = 1;
    index->ui.scale_socle.y = 1;
    sfSprite_setScale(index->ui.spri_socle, index->ui.scale_socle);
    make_the_scoreboard(index, scoreboard);
    while (index->what_is_open == 100) {
        win_loop(index, scoreboard);
        sfRenderWindow_drawText(index->window,
        index->ui_text.txt_score_win, NULL);
        push_win(index);
        sfRenderWindow_display(index->window);
    }
}