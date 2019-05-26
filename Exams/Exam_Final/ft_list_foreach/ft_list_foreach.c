/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_foreach.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/01 13:30:17 by exam          #+#    #+#                 */
/*   Updated: 2019/03/01 13:38:18 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (begin_list != NULL && begin_list->data != NULL)
		f(&begin_list->data);
	if (begin_list->next != NULL)
		ft_list_foreach(begin_list->next, f);
}
