/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 06:21:30 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/11 05:09:37 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '+')
		str++;
	else if (str[i] == '-')
	{
		sign = -1;
		str++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
