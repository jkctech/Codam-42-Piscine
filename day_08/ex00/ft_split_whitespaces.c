/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_whitespaces.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/25 23:28:58 by JKCTech        #+#    #+#                */
/*   Updated: 2019/05/26 00:49:51 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_wordcnt(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '\n'
			&& str[i] != '\t' && str[i] != '\0')
			i++;
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			&& str[i] != '\0')
			i++;
		count++;
	}
	return (count);
}

int		ft_wordlen(char *str, int i)
{
	int len;

	len = 0;
	while (str[i] != ' ' && str[i] != '\n' && str[i] && str[i] != '\t')
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**output;

	i = 0;
	j = 0;
	output = malloc(sizeof(char*) * (ft_wordcnt(str) + 1));
	if(!output)
		return (NULL);
	while (str[i] != '\0')
	{
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i])
			i++;
		if (str[i] != '\0')
		{
			k = 0;
			output[j] = malloc(sizeof(char) * ft_wordlen(str, i) + 1);
			if(!output[j])
				return (NULL);
			while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
				output[j][k++] = str[i++];
			output[j++][k] = '\0';
		}
	}
	output[j] = '\0';
	return (output);
}