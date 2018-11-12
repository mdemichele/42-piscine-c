/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:56:51 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/07 20:04:58 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;

	elem = ft_create_elem(data);
	elem->next = *begin_list;
	*begin_list = elem;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*elem;
	int		i;

	elem = 0;
	i = 1;
	while (i < ac)
	{
		ft_list_push_front(&elem, av);
	}
	return (elem);
}
