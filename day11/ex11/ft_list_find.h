/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 07:21:50 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/07 08:04:11 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *current;

	current = begin_list;
	while (current->next)
	{
		if ((*cmp)(current->data, data_ref))
			return (&current);
		current = current->next;
	}
	return (0);
}
