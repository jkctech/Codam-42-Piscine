/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_op.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/15 18:44:37 by exam          #+#    #+#                 */
/*   Updated: 2019/02/15 18:55:52 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int left;
	int right;

	if(argc != 4)
	{
		printf("\n");
		return (0);
	}
	left = atoi(argv[1]);
	right = atoi(argv[3]);
	if (argv[2][0] == '+')
		printf("%d\n", left + right);
	if (argv[2][0] == '-')
		printf("%d\n", left - right);
	if (argv[2][0] == '*')
    	printf("%d\n", left * right);
	if (argv[2][0] == '/')
    	printf("%d\n", left / right);
	if (argv[2][0] == '%')
    	printf("%d\n", left % right);
	return (0);
}
