/*
** EPITECH PROJECT, 2023
** solo_stumper5
** File description:
** my_test.c
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(palindrome, valid)
{
    cr_assert_eq(palindrome("Noon"), OK);
}

Test(palindrome, valid2)
{
    cr_assert_eq(palindrome("Kayak"), OK);
}

Test(palindrome, invalid)
{
    cr_assert_eq(palindrome("Moon"), KO);
}

Test(palindrome, invalid2)
{
    cr_assert_eq(palindrome("Hello"), KO);
}

Test(my_strlen, test)
{
    cr_assert_eq(my_strlen("13 characters"), 13);
}

Test(my_putstr, test, .init = cr_redirect_stdout)
{
    my_putstr("Hello\n");
    cr_assert_stdout_eq_str("Hello\n");
}

Test(is_alpha, test1)
{
    cr_assert_eq(is_alpha('Y'), OK);
}

Test(is_alpha, test2)
{
    cr_assert_eq(is_alpha('5'), KO);
}

Test(is_upper, valid)
{
    cr_assert_eq(is_upper('A'), OK);
}

Test(is_upper, invalid)
{
    cr_assert_eq(is_upper('a'), KO);
}

Test(is_same_letter, same)
{
    cr_assert_eq(is_same_letter('t', 't'), OK);
}

Test(is_same_letter, different)
{
    cr_assert_eq(is_same_letter('a', 'b'), KO);
}

Test(is_same_letter, up_low)
{
    cr_assert_eq(is_same_letter('Z', 'z'), OK);
}

Test(is_same_letter, low_up)
{
    cr_assert_eq(is_same_letter('G', 'g'), OK);
}

Test(format_check, letters)
{
    cr_assert_eq(format_check("Moon"), OK);
}

Test(format_check, nums)
{
    cr_assert_eq(format_check("12456782"), KO);
}

Test(format_check, letters_nums)
{
    cr_assert_eq(format_check("Kayak42"), KO);
}

Test(format_check, empty)
{
    cr_assert_eq(format_check(""), KO);
}
