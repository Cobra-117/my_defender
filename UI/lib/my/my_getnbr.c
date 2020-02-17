/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** return a number into a string
*/

#include <unistd.h>

int my_putchar(char);

int my_strlen(char *str);

char *my_revstr(char *str);

long my_getnbr_getsign(char *str)
{
    long  i;
    long  sign;

    i = 0;
    sign = 0;
    while (i < my_strlen(str)) {
        if (str[i] == '-' || str[i] == '+') {
            sign = sign + 1;
        } else {
            return ((sign + 1) % 2 * 2 - 1);
        }
        i = i + 1;
    }
    return ((sign + 1) % 2 * 2 - 1);
}

long my_getnbr_getsign_rank(char *str)
{
    long  i;

    i = 0;
    while (i < my_strlen(str) && (str[i] == '-' || str[i] == '+'))
        i++;
    return (i);
}

long my_getnbr(char *str)
{
    long  value;
    long  i;
    long  sign;

    value = 0;
    sign = my_getnbr_getsign(str);
    i = my_getnbr_getsign_rank(str);
    while (i < my_strlen(str)) {
        if (str[i] >= '0' && str[i] <= '9') {
            if (value > 2147483648)
                return (0);
            else if (value > 2147483648 && str[i] > '7')
                return (0);
            value = value * 10 + str[i] - 48;
        } else {
            i = my_strlen(str);
        }
        i++;
    }
    return (value * sign);
}