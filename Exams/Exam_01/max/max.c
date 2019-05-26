/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   max.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/15 18:31:58 by exam          #+#    #+#                 */
/*   Updated: 2019/02/15 18:40:35 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int cnt;
	int max;

	cnt = 0;
	max = 0;
	if (len < 1)
		return (0);
	while (len > 0)
	{
		if (tab[(len - 1)] > max)
			max = tab[(len - 1)];
		len--;
	}
	return (max);
}
