/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbrutils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:37:37 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/09 12:42:06 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpointer(unsigned long long pointer, int *c_count)
{
	if (!pointer)
	{
		write(1, "(null)", 6);
		(*c_count) += 6;
	}
	ft_putstr("0x", c_count);
	ft_puthex(pointer, 'x', c_count);
}

void	ft_puthex(unsigned int n, char conversion, int *c_count)
{
	char	*base;

	if (conversion == 'X')
		base = "0123456789ABCDEF";
	if (conversion == 'x')
		base = "0123456789abcdef";
	if (n >= 16)
		ft_puthex(n / 16, conversion, c_count);
	ft_putchar(base[n % 16], c_count);
}

void	ft_putnbr(int n, int *c_count)
{
	long int	num;

	if (n < 0)
	{
		ft_putchar('-', c_count);
		num = n * -1;
	}
	else
		num = n;
	if (num > 9)
		ft_putnbr(num / 10, c_count);
	ft_putchar((num % 10) + '0', c_count);
}

void	ft_putunsnbr(unsigned int n, int *c_count)
{
	if (n > 9)
		ft_putunsnbr(n / 10, c_count);
	ft_putchar((n % 10) + '0', c_count);
}
