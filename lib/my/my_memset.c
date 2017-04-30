/*
** my_memset.c for ok in /home/alexandre/Documents/lib/my_lib/lib/my/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
**
** Started on  Tue Mar 21 16:15:35 2017 Alexandre Chamard-bois
** Last update Sun Apr 30 12:50:11 2017 Alexandre Chamard-bois
*/

void my_memset(void *data, const char type, int size)
{
  while (size)
  {
    *(char*)data = type;
    size--;
    data++;
  }
}
