/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/26 00:48:53 by JKCTech        #+#    #+#                */
/*   Updated: 2019/05/26 00:48:53 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char *input = " \n  Yo momma  	   is\n a		plopkoek \n		\n ";
	char **result = ft_split_whitespaces(input);
	int i = 0;

	while(result[i] != '\0') {
		printf("%s\n", result[i++]);
	}
	return (0);
}