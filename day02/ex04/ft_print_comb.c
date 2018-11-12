/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 06:56:10 by mdemiche          #+#    #+#             */
/*   Updated: 2018/10/25 21:23:12 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char numbers[3];

	numbers[0] = '0';
	while (numbers[0] <= '7')
	{
		numbers[1] = numbers[0] + 1;
		while (numbers[1] <= '8')
		{
			numbers[2] = numbers[1] + 1;
			while (numbers[2] <= '9')
			{
				ft_putchar(numbers[0]);
				ft_putchar(numbers[1]);
				ft_putchar(numbers[2]);
				numbers[2]++;
				if (numbers[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			numbers[1]++;
		}
		numbers[0]++;
	}
}
