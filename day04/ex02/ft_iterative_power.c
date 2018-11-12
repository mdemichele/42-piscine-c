/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 10:38:12 by mdemiche          #+#    #+#             */
/*   Updated: 2018/10/27 17:21:46 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0 || nb == 0)
	{
		return (0);
	}
	if (power == 0 || nb == 1)
	{
		return (1);
	}
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
