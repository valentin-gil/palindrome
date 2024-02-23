/*
** EPITECH PROJECT, 2024
** palindrome
** File description:
** main
*/

#include "my.h"

int main(int const ac, char const **av)
{
    if (ac == 1) {
        write(2, "Error: missing arguments.\n", 26);
        return (KO);
    }
    if (ac != 2 && av[0] == NULL) {
        return (KO);
    }
    if (format_check(av[1]) == KO) {
        return (KO);
    }
    if (palindrome(av[1]) == KO) {
        my_putstr("not a palindrome.\n");
    } else {
        my_putstr("palindrome!\n");
    }
    return (OK);
}
