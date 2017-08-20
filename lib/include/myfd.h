/*
** myfd.h for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Aug 20 17:21:17 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 17:53:16 2017 Alexandre Chamard-bois
*/

#ifndef MYFD_H_
#define MYFD_H_

#include "macro.h"

typedef struct  s_buffer
{
  char          str[READ_SIZE + 1];
  int           i;
}               t_buffer;

typedef struct  s_myfd
{
  int           fd;
  int           end;
  t_buffer      buffer;
}               t_myfd;

#endif
