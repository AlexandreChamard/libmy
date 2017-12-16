/*
** strlen.c for test in /home/alexandre/Documents/lib/my_lib/lib/test/my
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Thu Nov 09 13:57:55 2017 alexandre Chamard-bois
** Last update Thu Nov 09 14:02:47 2017 alexandre Chamard-bois
*/

#include "libmy.h"
#include <string.h>
#include <stdio.h>

#define SIZE 10000000

int main()
{
	const char str1[] = "bonjour";
	printf("resultat:\t%ld\n", my_strlen(str1));
	printf("attendu:\t%ld\n", strlen(str1));
	const char str2[] = "";
	printf("resultat:\t%ld\n", my_strlen(str2));
	printf("attendu:\t%ld\n", strlen(str2));
	char *str3 = malloc(SIZE + 1);
	if (!str3) {
		perror(NULL);
		exit(1);
	}
	memset(str3, 0, SIZE + 1);
	memset(str3, 'a', SIZE);
	printf("resultat:\t%ld\n", my_strlen(str3));
	printf("attendu:\t%ld\n", strlen(str3));
}
