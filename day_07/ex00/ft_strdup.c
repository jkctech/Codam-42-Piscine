/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/01 14:40:27 by JKCTech        #+#    #+#                */
/*   Updated: 2019/04/01 14:40:27 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*new;

	len = 0;
	while (src[len] != '\0')
		len++;
	new = (*char)malloc(sizeof(*new) * (len + 1));
	i = 0;
	while(src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}