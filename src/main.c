/*
** EPITECH PROJECT, 2020
** main
** File description:
** my_defender
*/


void show_option(void)
{
    
}

int main(int ac, char **av)
{
    if (strcmp("-h", av[1]) == 1) {
        show_option();
        return (0);
    }
    my_defender();
}
