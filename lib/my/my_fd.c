/*
** my_fd.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sun Aug 20 17:20:38 2017 Alexandre Chamard-bois
** Last update Wed Nov 08 13:42:41 2017 alexandre Chamard-bois
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "libmy.h"
#include "scanf.h"

myfd_t	*my_fd_from_fd(const int fd)
{
	myfd_t *myfd = my_malloc(sizeof(myfd_t));

	if (!myfd) {
		return (NULL);
	}
	my_memset(myfd, 0, sizeof(myfd_t));
	myfd->fd = fd;
	return (myfd);
}

myfd_t	*my_open(const char *name, const int right)
{
	myfd_t *myfd;
	int fd = open(name, right);

	if (fd == -1) {
		return (NULL);
	}
	if (!(myfd = my_malloc(sizeof(myfd_t)))) {
		return (NULL);
	}
	my_memset(myfd, 0, sizeof(myfd_t));
	myfd->fd = fd;
	return (myfd);
}

void	my_close(myfd_t *myfd)
{
	if (!myfd) {
		return ;
	}
	if (myfd->fd > 2) {
		close(myfd->fd);
	}
	my_free(myfd);
}
