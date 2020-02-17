/*
** EPITECH PROJECT, 2019
** my pf pointers
** File description:
** handle %p
*/

#include "my.h"

int l_dec_to_hexa(char c, unsigned long int i)
{
    char *res;
    unsigned long int temprem;

    res = malloc (sizeof(char) * 12);
    for (int cursor = 0; i > 0; cursor++) {
        temprem = i % 16;
        if (temprem >= 10) {
                res[cursor] = (temprem + 97 - 10);
        } else {
            res[cursor] = temprem + 48;
        }
        i = i / 16;
    }
    res = my_revstr(res);
    my_putstr("0X");
    my_putstr(res);
}

int my_l_putnbr(unsigned long int n)
{
    if (n == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        n = 147483648;
    }

    if (n < 10 && n >= 0){
        my_putchar(48+n);
    }
    else if (n < 0){
        my_putchar('-');
        n = n *(-1);
        my_putnbr(n);

    }
    else {
        my_putnbr (n/10);
        my_putchar (n % 10 + 48);
    }
    return (0);
}
