/*
** my_strncmp.c for ok in /home/alexandre/Documents/lib_cheat/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Tue Jan  3 19:39:02 2017 Alexandre Chamard-bois
** Last update Tue Jan  3 19:44:05 2017 Alexandre Chamard-bois
*/

#define CMP my_strncmp

int 		CMP(char *s, char *d, int n)
{
	return ((*s - *d) && n > 0 ? *s - *d : *s == 0 ? 0 : CMP(++s, ++d, --n));
}
