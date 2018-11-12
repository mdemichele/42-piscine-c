/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 23:01:08 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/10 20:19:18 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *node;

	node = malloc(sizeof(node));
	if (!node)
		return (NULL);
	new->item = item;
	new->left = 0;
	new->right = 0;
	return (node);
}
