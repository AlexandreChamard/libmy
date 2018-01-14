/*
** EPITECH PROJECT, 2017
** main.c for libc+
** File description:
** descibe
*/

#include <stdio.h>
#include "Type.h"

typedef void (*func_t)(ptr self, ...);

void bla(ptr self, int a, int b)
{
	printf("%d %d\n", a, b);
}

int main()
{
	ptr ok = NULL;
	func_t oui = (func_t)&bla;

	oui(ok, 1, 12, 42, 12);
	oui(ok, 1);
}
