/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbrutils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:37:37 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/09 13:52:48 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *pointer)
{
	int	char_count;

	char_count = 0;
	if (!pointer)
	{
		char_count += ft_putstr("(nil)");
		return (char_count);
	}
	char_count += ft_putstr("0x");
	char_count += ft_puthex((unsigned long)pointer, 'x');
	return (char_count);
}

int	ft_puthex(unsigned long n, char specifier)
{
	char	*base;
	int		char_count;

	if (specifier == 'X')
		base = "0123456789ABCDEF";
	if (specifier == 'x')
		base = "0123456789abcdef";
	char_count = 0;
	if (n >= 16)
		char_count += ft_puthex(n / 16, specifier);
	char_count += ft_putchar(base[n % 16]);
	return (char_count);
}

int	ft_putnbr(int n)
{
	unsigned int	num;
	int				char_count;

	char_count = 0;
	if (n < 0)
	{
		char_count += ft_putchar('-');
		num = n * -1;
	}
	else
		num = n;
	if (num > 9)
		char_count += ft_putnbr(num / 10);
	char_count += ft_putchar((num % 10) + '0');
	return (char_count);
}

int	ft_putunsnbr(unsigned int n)
{
	int	char_count;

	char_count = 0;
	if (n > 9)
		char_count += ft_putunsnbr(n / 10);
	char_count += ft_putchar((n % 10) + '0');
	return (char_count);
}
