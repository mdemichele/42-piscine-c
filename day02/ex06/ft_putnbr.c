/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 12:43:03 by mdemiche          #+#    #+#             */
/*   Updated: 2018/10/25 21:50:01 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(char c);

void	ft_looper(int nb)
{
	ft_putchar(nb / 10);
	ft_putchar((nb % 2) + 48);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_looper(nb);
	}
	else if (nb > 0)
	{
		ft_looper(nb);
	}
	else
	{
		ft_putchar('0');
	}
}
