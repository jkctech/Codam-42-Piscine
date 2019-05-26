/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/26 14:13:34 by JKCTech        #+#    #+#                */
/*   Updated: 2019/05/26 14:13:34 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(void)
{
	char *input = "  Yo-momma.is a+pancake...";
	char *charset = "-. +";
	char **result = ft_split(input, charset);
	int i = 0;

	printf("Input: \"%s\"\nCharset: \"%s\"\n", input, charset);
	while(result[i] != '\0') {
		printf("%s\n", result[i++]);
	}
	return (0);
}