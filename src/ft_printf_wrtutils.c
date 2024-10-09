/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_wrtutils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:52:08 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/09 12:27:40 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c, int *c_count)
{
	write(1, &c, 1);
	(*c_count)++;
}

void	ft_putstr(char *s, int *c_count)
{
	if (!s)
	{
		write(1, "(null)", 6);
		(*c_count) += 6;
	}
	else
	{
		while (*s)
		{
			ft_putchar(*s, c_count);
			c_count++;
		}
	}
}
