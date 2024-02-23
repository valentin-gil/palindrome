/*
** EPITECH PROJECT, 2023
** my
** File description:
** yes very useful
*/

#include <unistd.h>

#ifndef MY_H_
    #define MY_H_
    #define OK 0
    #define KO 84

int my_strlen(char const *str);
int my_putstr(char const *str);
int is_alpha(const char c);
int is_upper(const char c);
int is_same_letter(const char c1, const char c2);
int format_check(char const *str);
int palindrome(char const *str);

#endif
