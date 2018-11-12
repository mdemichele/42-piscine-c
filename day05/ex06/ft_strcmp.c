/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 20:10:55 by mdemiche          #+#    #+#             */
/*   Updated: 2018/10/31 09:36:42 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	char *p1;
	char *p2;

	p1 = s1;
	p2 = s2;
	while (*p1 != '\0')
	{
		if (*p2 == '\0')
			return (1);
		if (*p2 > *p1)
			return (-1);
		if (*p2 < *p1)
			return (1);
		p1++;
		p2++;
	}
	if (*p2 != '\0')
		return (-1);
	return (0);
}