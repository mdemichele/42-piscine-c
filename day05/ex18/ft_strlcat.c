/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 07:43:07 by mdemiche          #+#    #+#             */
/*   Updated: 2018/10/30 22:11:55 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;
	int				length;

	i = 0;
	j = 0;
	length = 0;
	while (dest[i] != '\0')
		i++;
	while (j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j + 1] = '\0';
	return (i + j + 1);
}
