/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:37:21 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/07 20:00:29 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		size;

	size = 0;
	tmp = begin_list;
	while (tmp)
	{
		tmp = tmp_list->next;
		size++;
	}
	return (size);
}
