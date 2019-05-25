/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/26 01:06:18 by JKCTech        #+#    #+#                */
/*   Updated: 2019/05/26 01:06:18 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

int		main(void)
{
	char *input = " \n  Yo momma  	   is\n a		plopkoek \n		\n ";
	ft_print_words_tables(ft_split_whitespaces(input));
	return (0);
}