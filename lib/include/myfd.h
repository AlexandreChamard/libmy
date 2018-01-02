/*
** myfd.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Aug 20 17:21:17 2017 Alexandre Chamard-bois
** Last update Wed Nov 08 13:01:42 2017 alexandre Chamard-bois
*/

#ifndef MYFD_H_
#define MYFD_H_

#include "macro.h"

typedef struct	s_buffer {
	char	str[READ_SIZE + 1];
	int	i;
}	buffer_t;

typedef struct	s_myfd {
	int		fd;
	int		end;
	buffer_t	buffer;
}	myfd_t;

#endif
