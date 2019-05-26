/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rev_wstr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/01 13:42:33 by exam          #+#    #+#                 */
/*   Updated: 2019/03/01 13:59:03 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printword(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ')
		write(1, &str[i++], 1);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]) - 1;
		while (i >= 0)
		{
			if (argv[1][i] == ' ')
			{
				printword(&argv[1][i + 1]);
				write(1, " ", 1);
			}
			if (i == 0)
				printword(&argv[1][0]);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
