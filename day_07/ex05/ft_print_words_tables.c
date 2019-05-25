/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_words_tables.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/26 00:52:48 by JKCTech        #+#    #+#                */
/*   Updated: 2019/05/26 00:52:48 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
char	**ft_split_whitespaces(char *str);

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	while(tab[i] != '\0') {
		j = 0;

		while (tab[i][j] != '\0')
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}