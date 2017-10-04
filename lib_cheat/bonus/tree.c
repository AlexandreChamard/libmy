/*
** tree.c for tree in /home/Alex.Chamardbois/CPool/CPool_Tree
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Fri Oct  7 17:21:06 2016 Alexandre Chamard-bois
** Last update Wed Oct  4 14:47:15 2017 Alexandre Chamard-bois
*/

#include <unistd.h>

/* NON FONCTIONNEL */

int	n_sp(int size)
{
  return (size > 0 ? n_sp(size - 1) + (size + 5) / 2 : 0);
}

void	puts_tree(int *space, int *star, int *part, int size_branch)
{
  int	i;

  while (*part < size_branch)
  {
    i = 0;
    while (i != *space)
    {
      write(1, " ", 1);
      i++;
    }
    (*space)--;
    i = 0;
    while (i != *star)
    {
      write(1, "*", 1);
      i++;
    }
    *star += 2;
    write(1, "\n", 1);
    (*part)++;
  }
}

void	growing(int size, int space, int branch)
{
  int	size_branch;
  int	part;
  int	star;
  int	moins;

  part = 0;
  size_branch = 4;
  star = 1;
  while (branch < size)
  {
    puts_tree(&space, &star, &part, size_branch);
    size_branch++;
    part = 0;
    moins = (size_branch - 1) / 2;
    space += moins;
    star -= 2 * moins;
    branch++;
  }
}

int	trunk(int a, int s, int p, int i)
{
  write(1, !(i % (p + s + 1)) ? "\n" : i % (p + s + 1) > p ? "|" : " ", 1);
  return (i / (p + s + 1) != a ? trunk(a, s, p, i + 1) : 0);
}

void	tree(int s)
{
  s > 0 ? growing(s, n_sp(s), 0), trunk(s, s + !(s % 2), n_sp(s) - s / 2, 1) : 0;
}
