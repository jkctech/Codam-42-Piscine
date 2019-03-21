/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/07 16:54:26 by jkoopman       #+#    #+#                */
/*   Updated: 2019/03/11 20:03:44 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int resultbuffer;

	resultbuffer = *a / *b;
	*b = *a % *b;
	*a = resultbuffer;
}
