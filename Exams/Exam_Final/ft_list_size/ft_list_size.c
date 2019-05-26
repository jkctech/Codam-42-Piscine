/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_size.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/01 11:04:51 by exam          #+#    #+#                 */
/*   Updated: 2019/03/01 11:19:28 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

int		ft_list_size(t_list *begin_list)
{
	if (begin_list->next == NULL)
		return (1);
	return (ft_list_size(begin_list->next) + 1);
}
