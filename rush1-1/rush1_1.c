/*
** EPITECH PROJECT, 2019
** Assignment1
** File description:
** assignment1
*/

#include <unistd.h>

void my_putchar(char c);

int nbr_test(int ab, int cd)
{
    if (ab <= 0 || cd <= 0) {
        write (1, "Invalid size\n", 13);
        return (0);
    }
    return (1);
}

void other_line(int ab) {
    my_putchar('|');
    for (int a = 1; a < ab -1 ; a++) {
        my_putchar(' ');
    }
    if (ab > 1) {
        my_putchar('|');
    }
    my_putchar('\n');
}

void first_line(int ab)
{
    my_putchar('o');
    for (int i=1; i< ab - 1; i++) {
        my_putchar('-');
    }
    if (ab > 1) {
        my_putchar('o');
    }
    my_putchar('\n');
}

void rush(int ab, int cd)
{
    if (nbr_test(ab, cd) == 1) {
        first_line(ab);
        for (int a = 1; a < cd - 1; a++) {
            other_line(ab);
        }
        if (cd > 1) {
            first_line(ab);
        }
    }
}
