/*
** EPITECH PROJECT, 2019
** utilies for my print f
** File description:
** utilies u
*/

#include "my.h"

void pf_print_octal(int stock)
{
    stock = pf_convert_base(stock, 8);
    for (int i = 100; i != 10; i = i / 10) {
        my_putchar ('0');
    }
    my_putnbr(stock);
    return;
}

int pf_advanced_putstr(char *str, char *format, int i)
{
    int value  = 0;
    int stock = 0;

    if (format[i] == 's') {
        my_putstr(str);
    }
    if (format[i] == 'S') {
        while (str[value] != '\0') {
            if (str [value] < 32 || str[value] >= 127) {
                my_putchar (92);
                stock = str[value];
                pf_print_octal(stock);
            } else {
                my_putchar(str[value]);
            }
            value++;
        }
    }
    return (0);
}

int pf_is_argend(char c)
{
    switch (c) {
    case 'd': case 'i': case 'o':
        return (1);
    case 'u': case 'x': case 'X':
        return (1);
    case 'p': case 's': case 'S':
        return (1);
    case 'b': case 'n': case 'c':
        return (1);
    }
    return (0);
}

int pf_arg_end(char *s, int i)
{
    if (s[i] >= 65 && s[i] <= 90)
        return (pf_is_argend(s[i]));
    if (s[i] >= 97 && s[i] < 122)
        return (pf_is_argend(s[i]));
    if (s[i] == '%' && s[i - 1] == '%')
        return (1);
    return (0);
}
