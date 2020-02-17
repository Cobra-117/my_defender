/*
** EPITECH PROJECT, 2019
** my put nbr
** File description:
** display number
*/

#include "my.h"

int my_u_putnbr(unsigned int n)
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
        my_u_putnbr(n);

    }
    else {
        my_u_putnbr (n/10);
        my_putchar (n % 10 + 48);
    }
    return (0);
}
