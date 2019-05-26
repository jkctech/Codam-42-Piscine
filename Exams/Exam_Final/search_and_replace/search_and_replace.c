/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_and_replace.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/01 10:15:07 by exam          #+#    #+#                 */
/*   Updated: 2019/03/01 10:25:13 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_kill(void)
{
	write(1, "\n", 1);
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 4 || ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
		return (ft_kill());
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == argv[2][0])
			write(1, &argv[3][0], 1);
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
