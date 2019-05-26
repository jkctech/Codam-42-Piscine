/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/08 19:27:25 by exam          #+#    #+#                 */
/*   Updated: 2019/02/08 19:42:46 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int iterator;

	iterator = 0;
	while (s1[iterator] != '\0')
	{
		if (s1[iterator] != s2[iterator])
		{
			return (s1[iterator] - s2[iterator]);
		}
		iterator++;
	}
	return (0);
}
