/*
** EPITECH PROJECT, 2024
** palindrome
** File description:
** palindrome
*/

#include "my.h"

int is_upper(const char c)
{
    if (c >= 'A' && c <= 'Z') {
        return (OK);
    }
    return (KO);
}

int is_same_letter(const char c1, const char c2)
{
    if (c1 == c2) {
        return (OK);
    }
    if (is_upper(c1) == OK) {
        if ((c1 + 32) == c2) {
            return (OK);
        }
    } else {
        if ((c1 - 32) == c2) {
            return (OK);
        }
    }
    return (KO);
}

int palindrome(char const *str)
{
    int last = my_strlen(str) - 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_same_letter(str[i], str[last - i]) == KO) {
            return (KO);
        }
    }
    return (OK);
}
