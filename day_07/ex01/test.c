/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/25 14:31:33 by JKCTech        #+#    #+#                */
/*   Updated: 2019/05/25 14:34:46 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int i;
	int min = 5;
	int max = 10;
	int *output;

	output = ft_range(min, max);

	for(i = 0; i < (max - min); i++) {
		printf("%d\n", output[i]);
	}
	return (0);
}