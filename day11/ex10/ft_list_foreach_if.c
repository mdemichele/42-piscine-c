/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 06:58:15 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/07 08:58:15 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
	while (begin_list->next)
	{
		if ((*cmp)(begin_list->data, data_ref))
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
