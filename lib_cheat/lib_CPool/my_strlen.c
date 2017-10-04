/*
** my_strlen.c for strlen in /home/guilhem/CPool/SRC/mind_fuck/
**
** Made by Guilhem Fulcrand
** Login   <guilhem.fulcrand@epitech.eu@epitech.eu>
**
** Started on  Mon Dec 12 19:01:04 2016 Guilhem Fulcrand
** Last update Wed Oct  4 13:57:54 2017 Alexandre Chamard-bois
*/

int	my_strlen(char *str)
{
	return (*str ? my_strlen(str + 1) + 1 : 0);
}
