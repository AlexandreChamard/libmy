/*
** my_showmen.c for myshowmen in /home/Alex.Chamardbois/CPool/CPool_Day07/lib/my
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Wed Oct 12 14:09:38 2016 Alexandre Chamard-bois
** Last update Fri Apr 28 16:11:59 2017 Alexandre Chamard-bois
*/

#include "libmy.h"

static	void aff_text(const char *str, const int to)
{
  int	i;

  i = 0;
  while (i < to)
  {
	 	my_putchar(PRINTABLE(str[i]) ? str[i] : '.');
		i++;
	}
	while (i < 16)
	{
		my_putchar('.');
		i++;
	}
  my_putchar('\n');
}

static	void aff_hexa(const char *str, const int to, const char *patern)
{
  int	i;

  i = 0;
  while (i < 16)
  {
  	if (!(i % 2))
			my_putchar(' ');
  	if (i < to)
		{
			my_putchar(patern[(unsigned) (*(str + i)) / 16 % 16]);
    	my_putchar(patern[(unsigned) (*(str + i)) % 16]);
		}
    else
	  	my_putstr("  ");
		i++;
  }
	my_putstr("    ");
}

static	void aff_dec()
{
  static int tmp = 0;

	my_printf("0x%d\t", tmp);
	tmp += 10;
}

void	my_showmem(const char *str, const int size)
{
  int	i;
  int	aff_size;

  i = 0;
  while (i < size)
  {
		aff_size = MIN(16, size - i);
    aff_dec();
    aff_hexa(str, aff_size, "0123456789ABCDEF");
    aff_text(str, aff_size);
    i += 16;
    str += 16;
  }
}
