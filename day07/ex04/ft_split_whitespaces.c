/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 21:57:08 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/05 13:24:09 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	**ft_split_whitespaces(char *str)
{
	int		size;
	char	**result;
	int		i;
	int		j;
	int		k;

	size = ft_strlen(str);
	result = (char**)malloc(sizeof(char) * size + 1);
	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		k = 0;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
			j++;
		}
		result[j][k] = str[i];
		k++;
		i++;
	}
	result[j][k] = '\0';
	return (result);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
