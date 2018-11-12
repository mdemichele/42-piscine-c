/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:03:43 by mdemiche          #+#    #+#             */
/*   Updated: 2018/10/30 22:10:41 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			ptr = &str[i];
			while (str[i] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (ptr);
				i++;
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (str);
}
