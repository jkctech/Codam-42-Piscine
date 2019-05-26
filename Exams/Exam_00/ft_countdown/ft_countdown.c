/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_countdown.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/08 18:30:45 by exam          #+#    #+#                 */
/*   Updated: 2019/02/08 19:01:02 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char number;

	number = '9';
	while(number >= '0')
	{
		write(1, &number, 1);
		number--;
	}
	write(1, "\n", 1);
	return (0);
}
