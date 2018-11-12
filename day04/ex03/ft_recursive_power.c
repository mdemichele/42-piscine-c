/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 11:05:55 by mdemiche          #+#    #+#             */
/*   Updated: 2018/10/27 18:08:17 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
