/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/26 13:35:18 by JKCTech        #+#    #+#                */
/*   Updated: 2019/05/26 13:35:18 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_issplit(char c, char *charset)
{
	int i;

	i = 0;
	while(charset[i] != '\0')
	{
		if(charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_wordcnt(char *str, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		while (!ft_issplit(str[i], charset) && str[i] != '\0')
			i++;
		while (ft_issplit(str[i], charset)
			&& str[i] != '\0')
			i++;
		count++;
	}
	return (count);
}

int		ft_wordlen(char *str, int i, char *charset)
{
	int len;

	len = 0;
	while (ft_issplit(str[i], charset))
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**output;

	i = 0;
	j = 0;
	output = malloc(sizeof(char*) * (ft_wordcnt(str, charset) + 1));
	if(!output)
		return (NULL);
	while (str[i] != '\0')
	{
		while (ft_issplit(str[i], charset) && str[i])
			i++;
		if (str[i] != '\0')
		{
			k = 0;
			output[j] = malloc(sizeof(char) * ft_wordlen(str, i, charset) + 1);
			if(!output[j])
				return (NULL);
			while (!ft_issplit(str[i], charset) && str[i] != '\0')
				output[j][k++] = str[i++];
			output[j++][k] = '\0';
		}
	}
	output[j] = '\0';
	return (output);
}