/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemiche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 04:48:02 by mdemiche          #+#    #+#             */
/*   Updated: 2018/11/10 19:22:30 by mdemiche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_add(int a, int b);
int		ft_subtract(int a, int b);
int		ft_divide(int a, int b);
int		ft_multiply(int a, int b);
int		ft_modulus(int a, int b);
int		ft_putnbr(int nb);

#endif
