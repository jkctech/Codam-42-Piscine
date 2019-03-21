/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/16 12:14:53 by JKCTech        #+#    #+#                */
/*   Updated: 2019/03/16 20:49:03 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		fisletter(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int		fisalpha(char c)
{
	return (fisletter(c) || (c >= '0' && c <= '9'));
}

char	transform(char c, int direction)
{
	if(direction)
	{
		if (c >= 'a' && c <= 'z')
			c = c - 'a' + 'A';
	}
	else
	{
		if (c >= 'A' && c <= 'Z')
			c = c - 'A' + 'a';
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int		c;
	int		capped;

	capped = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (fisletter(str[c]))
			if (capped == 0 && (c == 0 || !fisalpha(str[c-1])))
			{
				str[c] = transform(str[c], 1);
				capped++;
			}
			else
				str[c] = transform(str[c], 0);
		else
			capped = 0;
		c++;
	}
	return (str);
}

