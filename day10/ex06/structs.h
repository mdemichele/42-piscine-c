/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 05:08:29 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/10 19:22:10 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct	s_opp
{
	char	operation;
	int		(*f)(int, int);
}				t_opp;

t_opp g_operations[] =
{
	{'+', &ft_add},
	{'-', &ft_subtract},
	{'*', &ft_multiply},
	{'/', &ft_divide},
	{'%', &ft_modulus}
};

#endif
