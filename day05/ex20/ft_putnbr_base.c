/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 08:16:42 by mdemiche          #+#    #+#             */
/*   Updated: 2018/10/30 21:03:53 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

int	ft_putnbr_base(int nbr, char *base)
{
	int b;
	int *i;
	int result[100];
	int r;

	b = 1;
	i = &nbr;
	r = 0;
	while (*base != '\0')
		b++;
	while (i > 0)
	{
		result[r] = i % b;
		i = i / b;
		r++;
	}

}
