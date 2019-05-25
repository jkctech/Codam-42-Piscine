/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/13 14:48:03 by jkoopman       #+#    #+#                */
/*   Updated: 2019/05/25 14:29:13 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *array;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	array = (int*)malloc(sizeof(*array) * (max - min));
	i = 0;
	while (min < max)
	{
		array[i++] = min++;
	}
	*range = array;
	return (i);
}