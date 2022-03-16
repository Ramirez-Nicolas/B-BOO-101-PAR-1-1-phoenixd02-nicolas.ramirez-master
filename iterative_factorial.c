/*
** EPITECH PROJECT, 2020
** iterative_factorial.c
** File description:
** factorial
*/

int iterative_factorial(int nb)
{
    int nbr = 1;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0)
        return (1);
    while (nb >= 1) {
        nbr = nbr * nb;
        nb--;
    }
    return (nbr);
}
