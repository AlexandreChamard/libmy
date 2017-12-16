/*
** init_garbage.c for ok in /home/alexandre/Documents/lib/my_lib/lib/garbage/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Aug 20 20:13:09 2017 Alexandre Chamard-bois
** Last update Fri Nov 10 14:12:23 2017 alexandre Chamard-bois
*/

#include "garbage.h"

const int open_active = 1;
const int close_active = 0;

glist_t *g_garbage = NULL;

__attribute__((constructor)) static void init_main(void)
{
	if (open_active) {
		gopen();
	}
}

__attribute__((destructor)) static void end_main(void)
{
	if (close_active) {
		gclose_all();
	}
}
