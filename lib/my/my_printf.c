/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include "my.h"

int handlenbr(char *format, int i, va_list a_list)
{
    switch (format[i]) {
    case 'i': case 'd' : case 'u' :
        pf_pr_int(format, i, a_list);
        break;
    case 'o': case 'x' : case 'X' :
        pf_pr_int(format, i, a_list);
        break;
    case 'p': case 'b':
        pf_pr_int(format, i, a_list);
        break;
    default:
        return (84);
    }
}

int pf_print_params(char *format, int i, va_list a_list)
{
    switch (format[i]) {
    case 'c':
        my_putchar(va_arg(a_list, int));
        break;
    case 's': case 'S':
        pf_advanced_putstr(va_arg(a_list, char *), format, i);
        break;
    case 'n':
        break;
    case '%':
        my_putchar('%');
    default:
        handlenbr(format, i, a_list);
    }
    return (0);
}

int pf_arg_size(char *s, int i)
{
    while (pf_arg_end(s, i) != 1) {
        i++;
    }
    return (i);
}

int  pf_count_params(char *s)
{
    int count  = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '%')
            count++;
    }
    return (count);
}

int my_printf(char *s, ...)
{
    va_list arg_list;
    int param_nbr ;
    char **tab_params;
    va_start(arg_list, s);
    param_nbr = pf_count_params(s);
    tab_params = malloc(sizeof(char) * param_nbr * 10);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '%') {
            i = pf_arg_size(s, i);
            pf_print_params(s, i, arg_list);
        } else {
            my_putchar(s[i]);
        }
    }
    return (0);
}
