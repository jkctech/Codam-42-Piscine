/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pgcd.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/15 19:00:58 by exam          #+#    #+#                 */
/*   Updated: 2019/02/15 19:26:40 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int left;
	int right;
	int small;

	if (argc != 3)
	{
		printf("\n");
		return (0);
	}
	left = atoi(argv[1]);
	right = atoi(argv[2]);
	if (left < right)
		small = left;
	else
		small = right;
	while (left % small != 0 || right % small != 0)
		small -= 1;
	printf("%d\n", small);
}
