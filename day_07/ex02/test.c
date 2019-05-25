/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/25 14:28:57 by JKCTech        #+#    #+#                */
/*   Updated: 2019/05/25 14:28:57 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int i;
	int min = 5;
	int max = 10;
	int *range[100];
	int size = 0;

	size = ft_ultimate_range(range, 5, 10);

	printf("Size: %d\n\n", size);

	for(i = 0; i < max - min; i++) {
		printf("%d\n", range[0][i]);
	}
	return (0);
}