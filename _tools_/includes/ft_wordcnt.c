/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_wordcnt.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/26 00:21:58 by JKCTech        #+#    #+#                */
/*   Updated: 2019/05/26 00:21:58 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0')
			i++;
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i] != '\0')
			i++;
		count++;
	}
	return (count);
}