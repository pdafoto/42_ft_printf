/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:29:57 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/09 14:00:33 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion_type(va_list args, char *str)
{
	int	char_count;

	char_count = 0;
	if (*str == 'c')
		char_count += ft_putchar((char) va_arg(args, int));
	if (*str == 's')
		char_count += ft_putstr(va_arg(args, char *));
	if (*str == 'p')
		char_count += ft_putpointer(va_arg(args, void *));
	if (*str == 'd' || *str == 'i')
		char_count += ft_putnbr(va_arg(args, int));
	if (*str == 'u')
		char_count += ft_putunsnbr(va_arg(args, unsigned int));
	if (*str == 'x' || *str == 'X')
		char_count += ft_puthex(va_arg(args, unsigned int), *str);
	if (*str == '%')
		char_count += ft_putchar('%');
	return (char_count);
}

int	ft_printf(const char *str, ...)
{
	int		total_count;
	va_list	args;

	total_count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			total_count += ft_conversion_type(args, (char *)str);
		}
		else
			total_count += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (total_count);
}
