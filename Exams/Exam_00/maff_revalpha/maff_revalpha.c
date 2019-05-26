/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   maff_revalpha.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/08 19:03:36 by exam          #+#    #+#                 */
/*   Updated: 2019/02/08 19:10:07 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	lower_char;
	char	upper_char;
	int		iterator;

	lower_char = 'z';
	upper_char = 'Z';
	iterator = 1;
	while (iterator <= 26)
	{
		if (iterator % 2 == 0)
		{
			write(1, &upper_char, 1);
		}
		else
		{
			write(1, &lower_char, 1);
		}
		iterator++;
		lower_char--;
		upper_char--;
	}
	write(1, "\n", 1);
}
