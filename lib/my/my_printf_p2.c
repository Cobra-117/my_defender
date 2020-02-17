/*
** EPITECH PROJECT, 2019
** my_printf part 2
** File description:
** part 2 of my_printf
*/



#include "my.h"

int dec_to_hexa(char c, int i)
{
    char *res;
    int temprem;
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

int othercase(char *format, int i, va_list a_list)
{
    int nbr  = 0;
    unsigned long int point;

    switch(format[i]) {
    case 'x': case 'X':
        dec_to_hexa(format[i], va_arg(a_list, int));
        break;
    case 'p':
        nbr = va_arg(a_list, unsigned int);
        handle_pointers(nbr);
        break;
    case 'b':
        nbr = pf_convert_base((va_arg (a_list, int)), 2);
        pf_form_n_print_int(format, i, nbr);
        break;
    default:
        my_putchar('b');
    }
        return (0);
}

int pf_form_n_print_int(char *format, int i, int nbr)
{
    if (format[i - 1] == '%') {
        my_putnbr(nbr);
    } else {
        pf_format_int(format, i, nbr);
    }
    return (0);
}

int pf_convert_base(int i, int base)
{
    int res = 0;
    int multiplier = 1;

    while (i > 0) {
        res = res + (i % base * multiplier);
        multiplier = multiplier * 10;
        i = i / base;
    }
    return (res);
}

int pf_pr_int(char *format, int i, va_list a_list)
{
    int nbr  = 0;

    switch (format [i]) {
    case 'd' : case 'i' :
        nbr = va_arg (a_list, int);
        pf_form_n_print_int(format, i, nbr);
        break;
    case 'o':
        nbr = pf_convert_base((va_arg (a_list, int)), 8);
        pf_form_n_print_int(format, i, nbr);
        break;
    case 'u':
        nbr = va_arg(a_list, unsigned int);
        pf_u_form_n_print_int(format, i, nbr);
        break;
    default:
        othercase(format, i, a_list);
    }
    return (0);
}
