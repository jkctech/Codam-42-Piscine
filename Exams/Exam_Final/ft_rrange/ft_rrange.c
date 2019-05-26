/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rrange.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/01 10:41:17 by exam          #+#    #+#                 */
/*   Updated: 2019/03/01 12:58:15 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int		getsize(int start, int end)
{
	if (start < end)
		return (end - start + 1);
	if (end < start)
		return (start - end + 1);
	else
		return (1);
}

int					*ft_rrange(int start, int end)
{
	unsigned int	i;
	int				mtp;
	unsigned int	size;
	int				*result;

	i = 0;
	mtp = 1;
	if (start < end)
		mtp = -1;
	size = getsize(start, end);
	result = malloc(sizeof(int) * size);
	while (i < size)
	{
		result[i] = end + i * mtp;
		i++;
	}
	return (result);
}
