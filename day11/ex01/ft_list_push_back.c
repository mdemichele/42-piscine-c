/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:40:20 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/07 19:46:36 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;

	if (*begin_list)
	{
		new = *begin_list;
		while (new->next)
			new = new->next;
		new->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
