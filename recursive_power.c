/*
** EPITECH PROJECT, 2020
** recursive_power.c
** File description:
** recursive
*/

int recursive_power(int nb, int p)
{
    if (p > 0)
        return (nb *= recursive_power(nb, p - 1));
    if (p < 0)
        return (0);
    else
        return (1);
    return (nb);
}
