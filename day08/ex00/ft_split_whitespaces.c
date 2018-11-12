/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 08:42:27 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/05 13:35:31 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		g_j;

int		is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int		count_words(char *str)
{
	int count;
	int i;
	int wordstart;

	count = 0;
	i = 0;
	wordstart = 0;
	while (str[i] != '\0')
	{
		if (!(is_whitespace(str[i])) && wordstart == 0)
		{
			count++;
			wordstart = 1;
		}
		else if (is_whitespace(str[i]))
		{
			wordstart = 0;
		}
		i++;
	}
	return (count);
}

int		length_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && !(is_whitespace(str[i])))
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n && src[i] == '\0')
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		wordstart;
	int		i;
	int		length;

	array = (char **)malloc(sizeof(char*) * (count_words(str)) + 1);
	wordstart = 0;
	g_j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_whitespace(str[i]) && wordstart == 0)
		{
			wordstart = 1;
			length = length_word(&str[i]);
			array[g_j] = (char *)malloc(sizeof(char) * length + 1);
			array[g_j] = ft_strncpy(array[g_j], &str[i], length);
			g_j++;
		}
		else if (is_whitespace(str[i]))
			wordstart = 0;
		i++;
	}
	array[g_j] = 0;
	return (array);
}
