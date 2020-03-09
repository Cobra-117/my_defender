/*
** EPITECH PROJECT, 2020
** display and store score
** File description:
** display and store the score
*/

#include "../include/my.h"

void store_score(Index_t *index)
{
    int fd = open("assets/score.txt", O_RDWR);
    char *buff = malloc(sizeof(char) * 1);

    read(fd, &buff, 1);
    /*while (buff[0] != '|') {
        read(fd, &buff, 1);
    }*/
    //write(fd, "a", )
}

void score(Index_t *index)
{
    char *buff = malloc(sizeof(char) * 2);
    char *score = "Z";
    //read(fd, buff, 1);
    //write(fd, score, 1);
    //display_score
    //store_score(index);
}