/*
** EPITECH PROJECT, 2019
** rush1-5
** File description:
** rush1-5
*/

#include <unistd.h>

void my_putchar(char c);

int wrong_number(int length, int height)
{
    if (length <= 0 || height <= 0) {
        write (1, "Invalid size\n", 13);
        return (0);
    }
    return (1);
}

void first_line(char str[3],int length, int height)
{
    if (height == 1) {
        for (int i = 0; i < length; i++) {
            my_putchar(str[1]);
        }
    } else {
        my_putchar(str[0]);
        for (int i=1; i < length-1; i++){
            my_putchar(str[1]);
        }
        my_putchar(str[2]);
    }
    my_putchar('\n');
}

void  other_line(char c, int length, int height)
{
    my_putchar(c);
    for (int i = 1; i < length - 1; i++) {
        my_putchar(' ');
    }
    if (length > 1) {
        my_putchar(c);
    }
    my_putchar('\n');
}

void rush(int length, int height)
{
    char one[] = "ABC";
    char two[] = "CBA";

    if (wrong_number(length, height)  == 1) {
        first_line(one, length, height);
        for (int i = 1; i < height - 1; i++) {
            other_line(one, length, height);
        }
        if (height > 1) {
            first_line(two, length, height);
        }
    }
}
