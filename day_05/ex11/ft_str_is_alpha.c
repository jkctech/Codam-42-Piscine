/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/16 20:49:58 by JKCTech        #+#    #+#                */
/*   Updated: 2019/03/16 21:04:07 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		fisletter(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int		ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str == NULL || str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if(!fisletter(str[i]))
			return (0);
		i++;
	}
	return (1);
}
