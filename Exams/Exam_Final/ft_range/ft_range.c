/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/01 10:41:17 by exam          #+#    #+#                 */
/*   Updated: 2019/03/01 10:58:02 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int i;
	int *result;

	i = 0;
	if (end - start < 0)
	{
		result = malloc(0);
		return (result);
	}
	result = malloc(sizeof(int) * (end - start));
	while (i <= end - start)
	{
		result[i] = start + i;
		i++;
	}
	return (result);
}
