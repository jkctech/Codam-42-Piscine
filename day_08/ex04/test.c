/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/26 15:12:31 by JKCTech        #+#    #+#                */
/*   Updated: 2019/05/26 15:12:31 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main(void)
{
	t_point	point;

	set_point(&point);

	printf("X: %d, Y: %d\n", point.x, point.y);
	return (0);
}
