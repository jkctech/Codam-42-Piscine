/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/16 21:09:04 by JKCTech        #+#    #+#                */
/*   Updated: 2019/03/16 21:18:10 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		fisprintable(char c)
{
	return (c >= 32 && c <= 126);
}

int		ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	if (str == NULL || str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if(!fisprintable(str[i]))
			return (0);
		i++;
	}
	return (1);
}
