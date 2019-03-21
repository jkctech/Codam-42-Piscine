/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/08 16:00:59 by jkoopman       #+#    #+#                */
/*   Updated: 2019/03/11 21:36:49 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(3108, -2896));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(3809, 0));
	printf("%d\n", ft_iterative_power(7, 4));
	printf("%d\n", ft_iterative_power(-8, 5));
	printf("%d\n", ft_iterative_power(-6, 6));
	printf("%d\n", ft_iterative_power(-4, 8));
	printf("%d\n", ft_iterative_power(-3, 9));
	return (0);
}*/
