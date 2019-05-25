/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/19 11:39:20 by jkoopman       #+#    #+#                */
/*   Updated: 2019/03/10 19:50:15 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*itoa(int i, char b[])
{
	char	digit;
	char	*p;
	int		shifter;

	p = b;
	if (i < 0)
	{
		*p++ = '-';
		i *= -1;
	}
	shifter = i;
	while (shifter)
	{
		++p;
		shifter = shifter / 10;
	}
	*p = '\0';
	while (i)
	{
		*--p = i % 10 + '0';
		i = i / 10;
	}
	return (b);
}
