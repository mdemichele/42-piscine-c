/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 15:49:40 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/01 20:22:30 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;

	i = 0;
	size = (max - min);
	if (min >= max)
	{
		range[i] = 0;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * size);
	if (range[i] == '\0')
		return (0);
	while (i < size)
	{
		range[0][i] = min + i;
		i++;
	}
	return (size);
}
