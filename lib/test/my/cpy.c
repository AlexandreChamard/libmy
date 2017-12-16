/*
** strlen.c for test in /home/alexandre/Documents/lib/my_lib/lib/test/my
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Thu Nov 09 13:57:55 2017 alexandre Chamard-bois
** Last update Thu Nov 09 14:33:17 2017 alexandre Chamard-bois
*/

#include "libmy.h"
#include <string.h>
#include <stdio.h>

void cncpy()
{
	char str1[20] = "";
	char str2[20] = "";
	printf("ncpy\n");
	my_strncpy(str1, "bonjour", 7);
	strncpy(str2, "bonjour", 7);
	printf("resultat:\t%s\n", str1);
	printf("attendu:\t%s\n", str2);

	char str3[20] = "";
	char str4[20] = "";
	my_strncpy(str3, "bonjour", 3);
	strncpy(str4, "bonjour", 3);
	printf("resultat:\t%s\n", str3);
	printf("attendu:\t%s\n", str4);

	char str5[20] = "";
	char str6[20] = "";
	my_strncpy(str5, "bonjour", 10);
	strncpy(str6, "bonjour", 10);
	printf("resultat:\t%s\n", str5);
	printf("attendu:\t%s\n", str6);

	char *str7 = malloc(20);
	char *str8 = malloc(20);
	my_strncpy(str7, "bonjour", 6);
	strncpy(str8, "bonjour", 6);
	printf("resultat:\t%s\n", str7);
	printf("attendu:\t%s\n", str8);

	char str9[20] = "bienvenue";
	char str10[20] = "bienvenue";

	my_strncpy(str9, "bonjour", 6);
	strncpy(str10, "bonjour", 6);
	printf("resultat:\t%s\n", str9);
	printf("attendu:\t%s\n", str10);

	printf("\n");
}


void ccpy()
{
	printf("cpy\n");

	char str1[20] = "";
	char str2[20] = "";
	my_strcpy(str1, "bonjour");
	strcpy(str2, "bonjour");
	printf("resultat:\t%s\n", str1);
	printf("attendu:\t%s\n", str2);

	char *str3 = malloc(20);
	char *str4 = malloc(20);
	my_strcpy(str3, "bonjour");
	strcpy(str4, "bonjour");
	printf("resultat:\t%s\n", str3);
	printf("attendu:\t%s\n", str4);

	char str5[20] = "bienvenue";
	char str6[20] = "bienvenue";
	my_strcpy(str5, "bonjour");
	strcpy(str6, "bonjour");
	printf("resultat:\t%s\n", str5);
	printf("attendu:\t%s\n", str6);

	printf("\n");
}

int main()
{
	ccpy();
	cncpy();
}
