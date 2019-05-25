/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/13 11:12:48 by JKCTech        #+#    #+#                */
/*   Updated: 2019/05/25 14:00:46 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int cnt;
	int size;
	int *array;

	if (min >= max)
		return (NULL);
	size = (min - max);
	if (size < 0)
		size *= -1;
	array = (int*)malloc(size * sizeof(array) * (max - min));
	cnt = 0;
	while (cnt < size)
	{
		array[cnt] = min + cnt;
		cnt++;
	}
	return (array);
}