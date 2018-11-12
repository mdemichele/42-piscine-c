/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 14:40:07 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/01 15:33:12 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *result;
	int i;

	i = 0;
	if (min >= max)
		result = NULL;
	result = (int*)malloc(sizeof(*result) * (max - min));
	if (result == '\0')
		result = NULL;
	while (i < (max - min))
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
