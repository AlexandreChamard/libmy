/*
** cmp.c for test in /home/alexandre/Documents/lib/my_lib/lib/test/my
**
** Made by alexandre Chamard-bois
** Login   <alexandre@epitech.net>
**
** Started on  Thu Nov 09 14:34:53 2017 alexandre Chamard-bois
** Last update Thu Nov 09 15:24:06 2017 alexandre Chamard-bois
*/

#include "libmy.h"
#include <stdio.h>
#include <string.h>

void smemcmp()
{
	printf("memcmp\n");

	char s1[20] = "";
	char s2[20] = "";

	printf("[%s] [%s] %d\n", s1, s2, 5);
	printf("resultat:\t%d\n", my_memcmp(s1, s2, 5));
	printf("attendu:\t%d\n", memcmp(s1, s2, 5));

	strcpy(s1, "aaaa");
	strcpy(s2, "aaab");
	printf("[%s] [%s] %d\n", s1, s2, 4);
	printf("resultat:\t%d\n", my_memcmp(s1, s2, 4));
	printf("attendu:\t%d\n", memcmp(s1, s2, 4));

	strcpy(s1, "aaaa");
	strcpy(s2, "aaab");
	printf("[%s] [%s] %d\n", s1, s2, 3);
	printf("resultat:\t%d\n", my_memcmp(s1, s2, 3));
	printf("attendu:\t%d\n", memcmp(s1, s2, 3));

	strcpy(s1, "aaaa");
	strcpy(s2, "aaac");
	printf("[%s] [%s] %d\n", s1, s2, 10);
	printf("resultat:\t%d\n", my_memcmp(s1, s2, 10));
	printf("attendu:\t%d\n", memcmp(s1, s2, 10));

	strcpy(s1, "aaac");
	strcpy(s2, "aa");
	printf("[%s] [%s] %d\n", s1, s2, 10);
	printf("resultat:\t%d\n", my_memcmp(s1, s2, 10));
	printf("attendu:\t%d\n", memcmp(s1, s2, 10));

	printf("[NULL] [%s]\n", s2);
	printf("resultat:\t%d\n", my_memcmp(NULL, s2, 3));
	printf("attendu:\t%d\n", -1);

	printf("[%s] [NULL]\n", s1);
	printf("resultat:\t%d\n", my_memcmp(s1, NULL, 3));
	printf("attendu:\t%d\n", 1);

	printf("[NULL] [NULL]\n");
	printf("resultat:\t%d\n", my_memcmp(NULL, NULL, 3));
	printf("attendu:\t%d\n", 0);

	printf("\n");
}

void swordcmp()
{
	printf("wordcmp\n");

	char s1[20] = "";
	char s2[20] = "";

	printf("[%s] [%s]\n", s1, s2);
	printf("resultat:\t%d\n", my_wordcmp(s1, s2));
	printf("attendu:\t%d\n", 0);

	strcpy(s1, "aaaa");
	strcpy(s2, "aaab");
	printf("[%s] [%s]\n", s1, s2);
	printf("resultat:\t%d\n", my_wordcmp(s1, s2));
	printf("attendu:\t%d\n", 1);

	strcpy(s1, "aaaa");
	strcpy(s2, "aa");
	printf("[%s] [%s]\n", s1, s2);
	printf("resultat:\t%d\n", my_wordcmp(s1, s2));
	printf("attendu:\t%d\n", 0);

	printf("[NULL] [%s]\n", s2);
	printf("resultat:\t%d\n", my_wordcmp(NULL, s2));
	printf("attendu:\t%d\n", 1);

	printf("[%s] [NULL]\n", s1);
	printf("resultat:\t%d\n", my_wordcmp(s1, NULL));
	printf("attendu:\t%d\n", 1);

	printf("[NULL] [NULL]\n");
	printf("resultat:\t%d\n", my_wordcmp(NULL, NULL));
	printf("attendu:\t%d\n", 1);

	printf("\n");
}

void sstrncmp()
{
	printf("strncmp\n");

	char s1[20] = "";
	char s2[20] = "";

	printf("[%s] [%s] %d\n", s1, s2, 5);
	printf("resultat:\t%d\n", my_strncmp(s1, s2, 5));
	printf("attendu:\t%d\n", strncmp(s1, s2, 5));

	strcpy(s1, "aaaa");
	strcpy(s2, "aaab");
	printf("[%s] [%s] %d\n", s1, s2, 4);
	printf("resultat:\t%d\n", my_strncmp(s1, s2, 4));
	printf("attendu:\t%d\n", strncmp(s1, s2, 4));

	strcpy(s1, "aaaa");
	strcpy(s2, "aaab");
	printf("[%s] [%s] %d\n", s1, s2, 3);
	printf("resultat:\t%d\n", my_strncmp(s1, s2, 3));
	printf("attendu:\t%d\n", strncmp(s1, s2, 3));

	strcpy(s1, "aaaa");
	strcpy(s2, "aaac");
	printf("[%s] [%s] %d\n", s1, s2, 10);
	printf("resultat:\t%d\n", my_strncmp(s1, s2, 10));
	printf("attendu:\t%d\n", strncmp(s1, s2, 10));

	printf("[NULL] [%s]\n", s2);
	printf("resultat:\t%d\n", my_strncmp(NULL, s2, 3));
	printf("attendu:\t%d\n", -1);

	printf("[%s] [NULL]\n", s1);
	printf("resultat:\t%d\n", my_strncmp(s1, NULL, 3));
	printf("attendu:\t%d\n", 1);

	printf("[NULL] [NULL]\n");
	printf("resultat:\t%d\n", my_strncmp(NULL, NULL, 3));
	printf("attendu:\t%d\n", 0);

	printf("\n");
}


void sstrcmp()
{
	printf("strcmp\n");

	char s1[20] = "";
	char s2[20] = "";

	printf("[%s] [%s]\n", s1, s2);
	printf("resultat:\t%d\n", my_strcmp(s1, s2));
	printf("attendu:\t%d\n", strcmp(s1, s2));

	strcpy(s1, "aaaa");
	strcpy(s2, "aaab");
	printf("[%s] [%s]\n", s1, s2);
	printf("resultat:\t%d\n", my_strcmp(s1, s2));
	printf("attendu:\t%d\n", strcmp(s1, s2));

	strcpy(s1, "aaaa");
	strcpy(s2, "aaac");
	printf("[%s] [%s]\n", s1, s2);
	printf("resultat:\t%d\n", my_strcmp(s1, s2));
	printf("attendu:\t%d\n", strcmp(s1, s2));

	strcpy(s1, "aaac");
	strcpy(s2, "aaaa");
	printf("[%s] [%s]\n", s1, s2);
	printf("resultat:\t%d\n", my_strcmp(s1, s2));
	printf("attendu:\t%d\n", strcmp(s1, s2));

	strcpy(s1, "aaa");
	strcpy(s2, "aaac");
	printf("[%s] [%s]\n", s1, s2);
	printf("resultat:\t%d\n", my_strcmp(s1, s2));
	printf("attendu:\t%d\n", strcmp(s1, s2));

	printf("[NULL] [%s]\n", s2);
	printf("resultat:\t%d\n", my_strcmp(NULL, s2));
	printf("attendu:\t%d\n", -1);

	printf("[%s] [NULL]\n", s1);
	printf("resultat:\t%d\n", my_strcmp(s1, NULL));
	printf("attendu:\t%d\n", 1);

	printf("[NULL] [NULL]\n");
	printf("resultat:\t%d\n", my_strcmp(NULL, NULL));
	printf("attendu:\t%d\n", 0);

	printf("\n");
}


int main()
{
	sstrcmp();
	sstrncmp();
	swordcmp();
	smemcmp();
}
