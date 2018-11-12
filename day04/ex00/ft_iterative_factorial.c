/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 09:33:15 by mdemiche          #+#    #+#             */
/*   Updated: 2018/10/27 17:10:28 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;
	int count;

	result = nb;
	count = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	while (count < nb)
	{
		result *= count;
		count++;
	}
	return (result);
}
