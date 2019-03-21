/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/16 21:02:42 by JKCTech        #+#    #+#                */
/*   Updated: 2019/03/16 21:04:10 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		fisnummer(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	if (str == NULL || str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if(!fisnummer(str[i]))
			return (0);
		i++;
	}
	return (1);
}
