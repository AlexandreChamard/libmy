/*
** my_genbr.c for my_getnbr in /home/Alex.Chamardbois/CPool/CPool_Day04
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Thu Oct  6 22:28:26 2016 Alexandre Chamard-bois
** Last update Wed Apr 12 22:48:11 2017 Alexandre Chamard-bois
*/

int			my_getnbr(const char *str)
{
	int		nbr;
	int		nega;

	nbr = 0;
	nega = 1;
	if (*str == '-' && (nega = -1))
		str++;
	while (*str <= '9' && *str >= '0')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	return (nega * nbr);
}

int is_base(const char c, const char *base, const int i)
{
  if (!c)
    return (-1);
  if (!*base)
    return (-2);
  if (c == *base)
    return (i);
  return (is_base(c, base + 1, i + 1));
}

int verif_base(const char *str)
{
  int i;
  int j;

  i = -1;
  while (str[++i])
    {
      if (str[i] == '-' || str[i] == '+')
	return (-1);
      j = i;
      while (str[++j])
	if (str[i] == str[j])
	  return (-1);
    }
  return (i);
}

int my_getnbr_base(const char *str, const char *base)
{
  int nb;
  int pos;
  int len;
  int neg;

  if (!str || !base)
    return (0);
  nb = 0;
  if ((len = verif_base(base)) == -1)
    return (0);
  neg = 1;
  while (*str == '-' || *str == '+')
    {
      if (*str == '-')
	neg *= -1;
      str++;
    }
  while ((pos = is_base(*str, base, 0)) >= 0)
    {
      nb = nb * len + pos;
      str++;
    }
  if (pos == -2)
    return (0);
  return (nb * neg);
}
