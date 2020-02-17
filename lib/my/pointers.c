/*
** EPITECH PROJECT, 2019
** pointers
** File description:
** manage the pointers
*/

#include "my.h"

int point_dec_to_hexa(char c, unsigned int i)
{
    char *res;
    unsigned int temprem;
    int cursor = 0;

    res = malloc (sizeof(char) * 50);
    for (cursor = 0; i > 0; cursor++) {
        temprem = i % 16;
        if (temprem >= 10) {
            if (c == 'X') {
                res[cursor] = (temprem + 65 - 10);
            } else if (c == 'x') {
                res[cursor] = (temprem + 97 -10);
            }
        } else {
            res[cursor] = temprem + 48;
        }
        i = i / 16;
    }
    res[cursor] = '\0';
    res = my_revstr(res);
    my_putstr(res);
}

void handle_pointers(unsigned int nbr)
{
    my_putstr("0x1");
    point_dec_to_hexa('x', nbr);
}