/*
** EPITECH PROJECT, 2019
** rush 1-2
** File description:
** displays a square in ASCII
*/

#include <unistd.h>

void my_putchar(char c);

void display_first_line(char string[3], int x, int y)
{
    if (y == 1 || x == 1) {
        for (int i = 0; i < x; i++)
            my_putchar(string[1]);
    } else {
        my_putchar(string[0]);
        for (int i = 1; i < x - 1; i++)
            my_putchar(string[1]);
        my_putchar(string[2]);
    }
    my_putchar('\n');
}

void display_middle_line(char c, int x)
{
    my_putchar(c);
    for (int i = 0; i < x - 2; i++)
        my_putchar(' ');
    if (x > 1)
        my_putchar(c);
    my_putchar('\n');
}

void rush(int x, int y)
{
    char string[] = "ABC";

    if (x < 1 ||  y < 1) {
        write(1, "Invalid size\n", 13);
        return;
    }
    display_first_line(string, x, y);
    for (int i = 1; i < y - 1; i++)
        display_middle_line(string[1], x);
    if (y > 1)
        display_first_line(string, x, y);
}