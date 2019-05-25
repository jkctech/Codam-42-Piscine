/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_concat_params.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/14 16:02:44 by JKCTech        #+#    #+#                */
/*   Updated: 2019/05/25 15:10:11 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str);

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		arg;
	int		pos;

	arg = 1;
	pos = 0;
	while (arg < argc)
		pos += (ft_strlen(argv[arg++]) + 1);
	str = malloc(sizeof(char) * pos);
	if (!str)
		return (NULL);
	arg = 1;
	while (arg < argc)
	{
		ft_strcat(str, argv[arg++]);
		ft_strcat(str, "\n");
	}
	str[--pos] = '\0';
	return (str);
}