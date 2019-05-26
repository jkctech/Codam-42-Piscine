/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   str_capitalizer.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/01 11:22:59 by exam          #+#    #+#                 */
/*   Updated: 2019/03/01 12:01:30 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		fisupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		fislower(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	mklower(char c, int cp)
{
	cp = cp + 0;
	if (fisupper(c))
		c = c - 'A' + 'a';
	return (c);
}

char	mkupper(char c, int cp)
{
	cp = cp + 0;
	if (fislower(c))
		c = c - 'a' + 'A';
	return (c);
}

int		main(int argc, char **argv)
{
	int		arg;
	int		c;
	int		capped;

	arg = 1;
	capped = 0;
	if (argc > 1)
		while (arg < argc)
		{
			c = 0;
			while (argv[arg][c] != '\0')
			{
				if (fislower(argv[arg][c]) || fisupper(argv[arg][c]))
					if (capped == 0)
						argv[arg][c] = mkupper(argv[arg][c], capped++);
					else
						argv[arg][c] = mklower(argv[arg][c], capped);
				else if (argv[arg][c] == ' ' || argv[arg][c] == '\t')
					capped = 0;
				write(1, &argv[arg][c++], 1);
			}
			write(1, "\n", 1);
			arg++;
		}
	return (0);
}
