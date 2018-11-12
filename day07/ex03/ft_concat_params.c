/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 20:24:31 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/01 22:20:45 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(int argc, char **argv);

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		size;
	int		k;

	i = 1;
	k = 0;
	size = ft_strlen(argc, argv);
	str = (char*)malloc(sizeof(char) * size + 1);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[k++] = argv[i][j++];
		}
		if (!(i == argc - 1))
			str[k] = '\n';
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}

int		ft_strlen(int argc, char **argv)
{
	int i;
	int j;
	int size;

	i = 1;
	j = 0;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			j++;
			size++;
		}
		i++;
	}
	return (size);
}
