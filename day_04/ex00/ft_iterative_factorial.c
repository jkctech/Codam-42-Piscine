/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/08 10:57:56 by jkoopman       #+#    #+#                */
/*   Updated: 2019/03/11 20:57:25 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int current_iteration;
	int buffer;
	int original;

	original = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	buffer = 1;
	current_iteration = 1;
	while (current_iteration <= nb)
	{
		buffer *= current_iteration;
		current_iteration++;
	}
	return (buffer);
}
