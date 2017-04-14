/*
** my_strcmp.c for strcmp in /home/guilhem/CPool/SRC/mind_fuck/
**
** Made by Guilhem Fulcrand
** Login   <guilhem.fulcrand@epitech.eu@epitech.eu>
**
** Started on  Mon Dec 19 16:29:36 2016 Guilhem Fulcrand
** Last update Mon Dec 19 16:52:56 2016 Guilhem Fulcrand
*/

int 		my_strcmp(char *s, char *d)
{
	return ((*s - *d) ? *s - *d : *s == 0 ? 0 : my_strcmp(s + 1, d + 1));
}
