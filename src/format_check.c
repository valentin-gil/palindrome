/*
** EPITECH PROJECT, 2024
** palindrome
** File description:
** format_check
*/

#include "my.h"

int is_alpha(const char c)
{
    if ((c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z')) {
        return (OK);
    }
    return (KO);
}

int format_check(char const *str)
{
    if (my_strlen(str) == 0)
        return (KO);
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_alpha(str[i]) == KO)
            return (KO);
    }
    return (OK);
}
