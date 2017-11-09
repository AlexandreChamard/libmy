/*
** my_getfloat.c for ok in /home/alexandre/Documents/tek-1/raytracer1/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Fri Feb 17 10:02:38 2017 Alexandre Chamard-bois
** Last update Wed Nov 08 13:40:55 2017 alexandre Chamard-bois
*/

int 		getfl(const char *str, int *rang)
{
	int	fl = 0;
	int	max = 0;

	while (str[*rang] >= '0' && str[*rang] <= '9' && --max) {
		fl = fl * 10 + str[*rang] - '0';
		(*rang)++;
	}
	return (fl);
}

double	my_atof(const char *str)
{
	double	nb = 0;
	double	fl = 0;
	int	rang = 0;
	int	nega = 1;
	int	i = 0;

	if (*str == '-' && (nega = -1)) {
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9') {
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	if (str[i] == '.') {
		fl = getfl(str + i + 1, &rang);
	}
	while ((--rang) > -1) {
		fl /= 10;
	}
	return ((nb + fl) * nega);
}
