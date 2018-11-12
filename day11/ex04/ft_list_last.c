/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:45:27 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/07 20:03:41 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list	*tmp;

	if (!begin_list)
		return (NULL);
	tmp = begin_list;
	while (tmp->next)
	{
		tmp = tmp_list->next;
	}
	return (tmp);
}
