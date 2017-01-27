/*
** my_printf.c /home/alexandre/Documents/tek-1/PSU_2016_my_printf/
**
** Made by John Doe
** Login	 <login_x@epitech.eu>
**
** Started on  Wed Nov  9 16:01:48 2016 John Doe
** Last update Fri Jan  6 10:31:53 2017 Alexandre Chamard-bois
*/

#include "my_printf.h"

t_print to_be_printed[13] =
{
	{'d', &call_put_nbr},
	{'i', &call_put_nbr},
	{'u', &call_put_unsigned_nbr},
	{'o', &call_put_o_nbr},
	{'x', &call_put_x_nbr},
	{'X', &call_put_X_nbr},
	{'c', &call_putchar},
	{'s', &call_putstr},
	{'p', &call_put_adr},
	{'b', &call_put_b_nbr},
	{'S', &call_putstr_S},
	{'%', &call_percent},
	{0, NULL}
};

int		verif_print(char *str)
{
	int	i;
	int	find;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			find = 0;
			i += 1;
			while (to_be_printed[find].c != str[i] && to_be_printed[find].c)
				find++;
			if (find == 12)
				return (84);
		}
		i += 1;
	}
	return (0);
}

int		find_function(char flag, va_list ap)
{
	int	find;
	int	count;

	find = 0;
	while (to_be_printed[find].c != flag)
		find += 1;
	count = to_be_printed[find].func(ap);
	if (count < 0)
		return (-2147483648);
	return (count);
}

int		my_printf(char *str, ...)
{
	int	i;
	int	count;
	va_list ap;

	va_start(ap, str);
	i = 0;
	if ((count = verif_print(str)) != 0)
		return (-1);
	while (str[i])
	{
		if (str[i] != '%')
		{
			my_putchar(str[i]);
			count++;
		}
		else
		{
			i++;
			if ((count += find_function(str[i], ap)) < 0)
				return (-1);
		}
		i++;
	}
	va_end(ap);
	return (count);
}
