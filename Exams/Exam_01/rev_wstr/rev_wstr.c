/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rev_wstr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/15 19:37:51 by exam          #+#    #+#                 */
/*   Updated: 2019/02/15 20:04:22 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		nope(void)
{
	ft_putchar('\n');
	return (0);
}

void	printword(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt] != '\0' && str[cnt] != ' ')
	{
		ft_putchar(str[cnt]);
		cnt++;
	}
}

int		main(int argc, char **argv)
{
	int cnt;
	int size;

	if (argc != 2)
		return (nope());
	size = 0;
	cnt = 0;
	while (argv[1][cnt] != '\0')
		cnt++;
	while (cnt >= 0)
	{
		if (argv[1][cnt] == ' ')
		{
			printword(&argv[1][(cnt + 1)]);
			ft_putchar(' ');
		}
		cnt--;
	}
	printword(&argv[1][0]);
	ft_putchar('\n');
}
