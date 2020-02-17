/*
** EPITECH PROJECT, 2019
** my_print f_format_int
** File description:
**  apply some format flags to int for my_printf
*/

#include "my.h"

void pf_print_point(char *form, int i, int nbr)
{
    int multiplier = 1;
    int z = i;
    int zero_nbr = 0;
    int power = 0;
    int ten_power = 1;

    for (; form[z] != '.'; z++) {
    }
    for (; form[z + 1] != 'd' && form[z + 1] != 'o' && form[z + 1] != 'b';) {
        zero_nbr = zero_nbr + (form[z + 1] - 48) * multiplier;
        multiplier = multiplier * 10;
        z++;
    }
    for (int i = 0; i < zero_nbr -1 ; i++) {
        ten_power = ten_power * 10;
    }
    for (; nbr < ten_power; ten_power = ten_power / 10) {
        my_putchar('0');
    }
    my_putnbr(nbr);
}

int pf_print_signe(int nbr)
{
    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * (-1);
    } else {
        my_putchar('+');
    }
    return (nbr);
}

void pf_format_int(char *format, int i, int nbr)
{
    int point = 0;
    int signe = 0;

    for (; format[i] != '%'; i--) {
        if (format [i] == '.')
            point = 1;
        if (format [i] == '+' || nbr < format[0])
            signe = 1;
        if (format [i] == 32)
            point = 2;
    }
    if (signe == 1)
        nbr = pf_print_signe(nbr);
    if (point == 1)
        pf_print_point(format, i, nbr);
    if (point == 2) {
        my_putnbr(nbr);
    }
}
