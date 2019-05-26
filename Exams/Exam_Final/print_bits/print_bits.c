/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_bits.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/01 10:28:44 by exam          #+#    #+#                 */
/*   Updated: 2019/03/01 10:37:15 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		i;

	i = 0;
	while (i < 8)
	{
		if (octet / 128 == 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		octet = octet << 1;
		i++;
	}
}
