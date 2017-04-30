/*
** scan_nb.c for ok in /home/alexandre/Documents/lib/my_lib/lib/scanf/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Sat Apr 29 16:25:21 2017 Alexandre Chamard-bois
** Last update Sun Apr 30 16:21:35 2017 Alexandre Chamard-bois
*/

#include "libmy.h"
#include "scan.h"

int _getll(t_buffer *buff, long long *nb)
{
  int neg;

  if (!NUM(POS(buff)) && POS(buff) != '-')
    return (1);
  *nb = 0;
  neg = 1;
  if (POS(buff) == '-')
  {
    neg = -1;
    if (INCR(buff))
      return (1);
  }
  while (POS(buff) <= '9' && POS(buff) >= '0')
  {
    *nb = *nb * 10 + POS(buff) - '0';
    if (INCR(buff))
      return (1);
  }
  *nb = *nb * neg;
  return (0);
}

static inline int _verif_base(const char c, const char *base, int len)
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

int _scan_nbrbase(t_format *format, t_buffer *buff, const char *base, int len)
{
  int *nb;
  int pos;

  if (_verif_base(POS(buff), base, len) == -1)
    return (1);
  if (!(nb = va_arg(format->ap, int *)))
    return (0);
  *nb = 0;
  while ((pos = _verif_base(POS(buff), base, len)) != -1)
  {
    *nb = *nb * len + pos;
    if (INCR(buff))
      return (1);
  }
  return (0);
}

int _getfl(t_buffer *buff, double *nb)
{
  double fl;
  int rang;

  if (POS(buff) != '.')
    return (0);
  if (INCR(buff))
    return (1);
  fl = 0;
  rang = 0;
  while (POS(buff) >= '0' && POS(buff) <= '9')
  {
    fl = fl * 10 + POS(buff) - '0';
    if (INCR(buff))
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

int _getfloat(t_buffer *buff, double *nb)
{
  int neg;

  if (!NUM(POS(buff)) && POS(buff) != '-'&& POS(buff) != '.')
    return (1);
  *nb = 0;
  neg = 1;
  if (POS(buff) == '-')
  {
    neg = !neg;
    if (INCR(buff))
      return (1);
  }
  while (POS(buff) >= '0' && POS(buff) <= '9')
  {
    *nb = *nb * 10 + POS(buff) - '0';
    if (INCR(buff))
      return (1);
  }
  if (_getfl(buff, nb))
    return (1);
  *nb *= neg;
  return (0);
}
