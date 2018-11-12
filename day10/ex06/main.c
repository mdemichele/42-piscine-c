/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 10:37:22 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/05 11:47:20 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "structs.h"

int	ft_calculate(n1, op, n2)
{
	int i;

	i = 0;
	if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
	{
		while (i < 5)
		{
			if (g_operations[i].operation == op)
				return (g_operations[i].f(n1, n2));
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	n1;
	int n2;
	char *op;

	if (argc != 4)
		return (0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	op = argv[2];

	if (n2 == 0 && op == '/')
	{
		ft_putstr("can't divide by zero\n");
		return (0);
	}
	if (n2 == 0 && op == '%')
	{
		ft_putstr("can't divide by zero\n");
		return (0);
	}
	ft_putnbr(ft_calculate(n1, op, n2));
	ft_putchar('\n');
	return (0);
}
