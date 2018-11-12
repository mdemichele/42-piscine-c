/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:30:40 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/09 11:06:26 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void *, void *))
{
	t_btree *node;

	if (*root == NULL)
	{
		node = btree_create_node(item);
		root = node;
	}
	node = *root;
	if (cpmf(item, node->item) < 0)
	{
		if (node->left)
			btree_insert_data(node->left, item, cmpf);
		else
			node->left = btree_create_node(item);
	}
	else
	{
		if (node->right)
			btree_insert_data(node->right, item, cmpf);
		else
			node->right = btree_create_node(item);
	}
}
