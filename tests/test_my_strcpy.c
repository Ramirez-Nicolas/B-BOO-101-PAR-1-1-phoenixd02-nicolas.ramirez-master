/*
** EPITECH PROJECT, 2020
** test.c
** File description:
** test u
*/

#include <criterion/criterion.h>

char *my_strcpy(char *dest , char const *src);

Test(my_strcpy, copy_in_empty_array)
{
    char dest [6] = {0};
    my_strcpy(dest , "Hello");
    cr_assert_str_eq(dest , "Hello");
}
