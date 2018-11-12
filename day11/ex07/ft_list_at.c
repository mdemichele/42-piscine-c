/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 05:59:10 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/07 08:56:24 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*iterator;
	unsigned int	i;

	i = 0;
	iterator = begin_list;
	if (begin_list)
	{
		while (i < nbr)
		{
			nbr++;
			iterator = iterator->next;
		}
	}
	else
		return (iterator = NULL);
	return (iterator);
}
