/*
** cat.c for test in /home/alexandre/Documents/lib/my_lib/lib/test/my
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Fri Nov 10 14:09:20 2017 alexandre Chamard-bois
** Last update Fri Nov 10 14:16:28 2017 alexandre Chamard-bois
*/

#include <stdio.h>
#include "libmy.h"

void sstrcat()
{
    printf("strcat\n");
    char *ptr = my_strcat("o", "r");
    printf("[%s]\n", ptr);
}

int main()
{
    sstrcat();
}
