/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/10 19:20:30 by JKCTech        #+#    #+#                */
/*   Updated: 2019/03/10 19:32:30 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    printout(char x, char y, char z)
{
    ft_putchar(x);
    ft_putchar(y);
    ft_putchar(z);
}

void    split(void)
{
    ft_putchar(',');
    ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				printout(x, y, z);
				if (!(x == '7' && y == '8' && z == '9'))
                    split();
				z++;
			}
			y++;
		}
		x++;
	}
}
