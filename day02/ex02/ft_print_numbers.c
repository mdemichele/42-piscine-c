/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 19:56:09 by mdemiche          #+#    #+#             */
/*   Updated: 2018/10/25 21:52:01 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char digit;

	digit = '1';
	while (digit <= '9')
	{
		ft_putchar(digit);
		digit++;
	}
}
