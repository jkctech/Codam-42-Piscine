/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/11 21:36:05 by JKCTech        #+#    #+#                */
/*   Updated: 2019/03/14 13:26:52 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
    return (nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(3108, -2896));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(3809, 0));
	printf("%d\n", ft_recursive_power(7, 4));
	printf("%d\n", ft_recursive_power(-8, 5));
	printf("%d\n", ft_recursive_power(-6, 6));
	printf("%d\n", ft_recursive_power(-4, 8));
	printf("%d\n", ft_recursive_power(-3, 9));
	return (0);
}
