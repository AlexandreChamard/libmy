/*
** scan_nb.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sat Apr 29 16:25:21 2017 Alexandre Chamard-bois
** Last update Sun Aug 20 18:03:26 2017 Alexandre Chamard-bois
*/

#include "libmy.h"
#include "scan.h"

int
_getll(t_myfd *fd, long long *nb)
{
  int neg;

  if (!NUM(POS(fd->buffer)) && POS(fd->buffer) != '-')
    return (1);
  *nb = 0;
  neg = 1;
  if (POS(fd->buffer) == '-')
  {
    neg = -1;
    if (INCR(fd))
      return (1);
  }
  while (POS(fd->buffer) <= '9' && POS(fd->buffer) >= '0')
  {
    *nb = *nb * 10 + POS(fd->buffer) - '0';
    if (INCR(fd))
      return (1);
  }
  *nb = *nb * neg;
  return (0);
}

static inline int
_verif_base(const char c, const char *base, int len)
{
  int i;

  i = 0;
  while (i < len)
  {
    if (c == base[i])
      return (i);
    i++;
  }
  return (-1);
}

int
_scan_nbrbase(t_myfd *fd, t_format *format, t_base base)
{
  int *nb;
  int pos;

  if (_verif_base(POS(fd->buffer), base.base, base.size) == -1)
    return (1);
  if (!(nb = va_arg(format->ap, int *)))
    return (0);
  *nb = 0;
  while ((pos = _verif_base(POS(fd->buffer), base.base, base.size)) != -1)
  {
    *nb = *nb * base.size + pos;
    if (INCR(fd))
      return (1);
  }
  return (0);
}

int
_getfl(t_myfd *fd, double *nb)
{
  double fl;
  int rang;

  if (POS(fd->buffer) != '.')
    return (0);
  if (INCR(fd))
    return (1);
  fl = 0;
  rang = 0;
  while (POS(fd->buffer) >= '0' && POS(fd->buffer) <= '9')
  {
    fl = fl * 10 + POS(fd->buffer) - '0';
    if (INCR(fd))
      return (1);
    rang++;
  }
  while (rang)
  {
    fl /= 10.0;
    rang--;
  }
  *nb += fl;
  return (0);
}

int
_getfloat(t_myfd *fd, double *nb)
{
  int neg;

  if (!NUM(POS(fd->buffer)) && POS(fd->buffer) != '-'&& POS(fd->buffer) != '.')
    return (1);
  *nb = 0;
  neg = 1;
  if (POS(fd->buffer) == '-')
  {
    neg = !neg;
    if (INCR(fd))
      return (1);
  }
  while (POS(fd->buffer) >= '0' && POS(fd->buffer) <= '9')
  {
    *nb = *nb * 10 + POS(fd->buffer) - '0';
    if (INCR(fd))
      return (1);
  }
  if (_getfl(fd, nb))
    return (1);
  *nb *= neg;
  return (0);
}
