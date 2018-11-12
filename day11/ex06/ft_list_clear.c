/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 05:44:38 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/07 08:16:47 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *clear;

	if (!begin_list || !*begin_list)
	{
		return ;
	}
	while (*begin_list)
	{
		clear = *begin_list;
		*begin_list = (*begin_list)->next;
		free(clear);
	}
	*begin_list = NULL;
}
