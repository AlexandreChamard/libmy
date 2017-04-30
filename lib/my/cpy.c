/*
** my_strcpy.c for mystrcpy in /home/Alex.Chamardbois/CPool/CPool_Day06
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Mon Oct 10 09:35:53 2016 Alexandre Chamard-bois
** Last update Sun Apr 30 12:46:16 2017 Alexandre Chamard-bois
*/

char	*my_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*my_strncpy(char *dest, const char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

void *my_memcpy(void *dest, const void *src, const int size)
{
  int i;

  i = 0;
  while (i < size)
	{
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
  return (dest);
}
