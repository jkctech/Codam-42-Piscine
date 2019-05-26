/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/26 15:01:50 by JKCTech        #+#    #+#                */
/*   Updated: 2019/05/26 15:01:50 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int		main(void)
{
	printf("%d\n", ABS(0));
	printf("%d\n", ABS(1));
	printf("%d\n", ABS(-1));
	printf("%d\n", ABS(-10));
	printf("%d\n", ABS(10));
	return (0);
}