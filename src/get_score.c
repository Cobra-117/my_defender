/*
** EPITECH PROJECT, 2020
** sdfghjk
** File description:
** sdfhjk
*/

#include "../include/my.h"

void get_score(Index_t *index)
{
    char *file_name = "src/score.txt";
    int fd = 0;
    char *score = int_to_string(index->money);
    int len = my_strlen(score);

    fd = open(file_name, O_WRONLY | O_TRUNC);
    write (fd, score, len);
    close(fd);
}