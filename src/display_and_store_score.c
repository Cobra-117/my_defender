/*
** EPITECH PROJECT, 2020
** display and store score
** File description:
** display and store the score
*/

#include "../include/my.h"

int *sort_this_score(Index_t *index, int *scores, int i)
{
    int temp;

    for (int j = 4; j > i; j--) {
        if (scores[i] < scores[j]) {
            temp = scores[i];
            scores[i] = scores[j];
            scores[j] = temp;
        }
    }
    return (scores);
}

int *sort_score(Index_t *index, int *scores)
{
    for (int i = 0; i < 4; i++) {
        scores = sort_this_score(index, scores, i);
    }
    return (scores);
}

void store_score(Index_t *index)
{
    int fd = open("assets/score.txt", O_RDWR);
    char *buff = malloc(sizeof(char) * 100);

    read(fd, buff, 99);
    write(fd, int_to_string(index->money),
    my_strlen(int_to_string(index->money)));
    write(fd, "\n", 1);
    close (fd);
    free(buff);
}

int get_one_score(Index_t *index, int fd)
{
    int rd = 0;
    char *buff = malloc(sizeof(char) * 100);
    char *line = malloc(sizeof(char) * 100);

    line[0] = '\0';
    line[1] = '\0';
    for (int i = 0; ;i++){
        rd = read(fd, buff, 1);
        if ((rd < 1 || buff[0] == '\n') && i == 0)
            return (0);
        if (rd < 1 || buff[0] == '\n')
            break;
        buff[1] = '\0';
        if (rd < 1)
            break;
        line = my_strcat(line, buff);
    }
    free (buff);
    return (my_getnbr(line));
}

void score(Index_t *index)
{
    int *scoreboard = malloc(sizeof(int) * 5);
    int fd = open("assets/score.txt", O_RDONLY);

    for (int i = 0; i < 5; i++) {
        scoreboard[i] = get_one_score(index, fd);
    }
    close (fd);
    scoreboard = sort_score(index, scoreboard);
    store_score(index);
    //display menu here
}