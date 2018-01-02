/*
** clean_line.c for test in /home/alexandre/Documents/lib/my_lib/lib/test/my
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Fri Nov 10 14:04:01 2017 alexandre Chamard-bois
** Last update Fri Nov 10 14:08:33 2017 alexandre Chamard-bois
*/

#include <stdio.h>
#include <string.h>
#include "libmy.h"

int main()
{
    char str[100] = "";

    printf("line:\t[%s]\n", str);
    printf("res:\t[%s]\n", clean_line(str));

    strcpy(str, "bonjour");
    printf("line:\t[%s]\n", str);
    printf("res:\t[%s]\n", clean_line(str));

    strcpy(str, "     bonjour   ");
    printf("line:\t[%s]\n", str);
    printf("res:\t[%s]\n", clean_line(str));

    strcpy(str, "  bo  n j o u  r             ");
    printf("line:\t[%s]\n", str);
    printf("res:\t[%s]\n", clean_line(str));

    strcpy(str, "\t\tbonjour");
    printf("line:\t[%s]\n", str);
    printf("res:\t[%s]\n", clean_line(str));
}
