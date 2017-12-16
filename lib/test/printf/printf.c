/*
** cat.c for test in /home/alexandre/Documents/lib/my_lib/lib/test/my
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Thu Nov 09 12:23:27 2017 alexandre Chamard-bois
** Last update Thu Nov 09 13:53:21 2017 alexandre Chamard-bois
*/

#include <unistd.h>
#include <stdio.h>
#include "libmy.h"

void d()
{
	const char mess1[] = "%d:\nresultat:\t[";
	const char mess[] = "resultat:\t[";

	write(1, mess1, sizeof(mess1));
	my_printf("%d", 42);
	write(1, "]\n", 2);
	printf("attendu:\t[%d]\n", 42);
	write(1, mess, sizeof(mess));
	my_printf("%d%d%d", 42, -32, 0);
	write(1, "]\n", 2);
	printf("attendu:\t[%d%d%d]\n", 42, -32, 0);

}

void s()
{
	const char mess1[] = "%s:\nresultat:\t[";
	const char mess[] = "resultat:\t[";
	char *ptr = NULL;

	write(1, mess1, sizeof(mess1));
	my_printf("%s", "bonjour");
	write(1, "]\n", 2);
	printf("attendu:\t[%s]\n", "bonjour");
	write(1, mess, sizeof(mess));
	my_printf("%s%s%s", "ou", "i ", "ok");
	write(1, "]\n", 2);
	printf("attendu:\t[%s%s%s]\n", "ou", "i ", "ok");
	write(1, mess, sizeof(mess));
	my_printf("%s", ptr);
	write(1, "]\n", 2);
	printf("attendu:\t[%s]\n", ptr);
}

void without()
{
	const char mess[] = "resultat:\t[";

	write(1, mess, sizeof(mess));
	my_printf("bonjour");
	write(1, "]\n", 2);
	my_printf("attendu:\t[bonjour]\n");
	write(1, mess, sizeof(mess));
	my_printf("");
	write(1, "]\n", 2);
	my_printf("attendu:\t[]\n");
}

int main()
{
	without();
	d();
	s();
}
