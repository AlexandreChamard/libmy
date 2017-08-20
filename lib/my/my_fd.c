/*
** my_fd.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Aug 20 17:20:38 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 17:20:55 2017 Alexandre Chamard-bois
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "libmy.h"
#include "scan.h"

t_myfd*
my_fd_from_fd(const int fd)
{
  t_myfd *myfd;

  if (!(myfd = malloc(sizeof(t_myfd))))
    return (NULL);
  my_memset(myfd, 0, sizeof(t_myfd));
  myfd->fd = fd;
  return (myfd);
}

t_myfd*
my_open(const char *name, const int right)
{
  int fd;
  t_myfd *myfd;

  if ((fd = open(name, right)) == -1)
    return (NULL);
  if (!(myfd = malloc(sizeof(t_myfd))))
    return (NULL);
  my_memset(myfd, 0, sizeof(t_myfd));
  myfd->fd = fd;
  return (myfd);
}

void
my_close(t_myfd *myfd)
{
  if (!myfd)
    return ;
  if (myfd->fd > 2)
    close(myfd->fd);
  free(myfd);
}
