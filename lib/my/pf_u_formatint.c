/*
** EPITECH PROJECT, 2019
** my_ print f_format_int
** File description:
**  apply some format flags to int for my_printf
*/

#include "my.h"

void pf_u_print_point(char *form, unsigned int i, unsigned int nbr)
{
    int multiplier = 1;
    int z = i;
    int zero_nbr = 0;
    int power = 0;
    int ten_power = 1;

    for (; form[z] != '.'; z++) {
    }
    for (; form[z + 1] != 'u';) {
        zero_nbr = zero_nbr+ (form[z + 1] - 48) * multiplier;
        multiplier = multiplier * 10;
        z++;
    }
    for (int i = 0; i < zero_nbr -1 ; i++) {
        ten_power = ten_power * 10;
    }
    for (; nbr < ten_power; ten_power = ten_power / 10) {
        my_putchar('0');
    }
    my_u_putnbr(nbr);
}

int pf_u_print_signe(unsigned int nbr)
{
    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * (-1);
    } else {
        my_putchar('+');
    }
    return (nbr);
}

void pf_u_format_int(char *format, int i, unsigned int nbr)
{
    int point = 0;
    int signe = 0;

    for (; format[i] != '%'; i--) {
        if (format [i] == '.')
            point = 1;
        if (format [i] == '+' || nbr < format[0])
            signe = 0;
        if (format [i] == 32)
            point = 2;
    }
    if (signe == 1)
        nbr = pf_u_print_signe(nbr);
    if (point == 1)
        pf_u_print_point(format, i, nbr);
    if (point == 2) {
        my_u_putnbr(nbr);
    }
}

int pf_u_form_n_print_int(char *format, int i, int nbr)
{
    if (format[i - 1] == '%') {
        my_u_putnbr(nbr);
    } else {
        pf_u_format_int(format, i, nbr);
    }
    return (0);
}
