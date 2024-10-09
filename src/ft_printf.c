/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:29:57 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/09 12:43:21 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_conversion_type(va_list args, const char conversion, int *c_count)
{
	if (conversion == 'c')
		ft_putchar(va_arg(args, int), c_count);
	else if (conversion == 's')
		ft_putstr(va_arg(args, char *), c_count);
	else if (conversion == 'p')
		ft_putpointer(va_arg(args, unsigned long long), c_count);
	else if (conversion == 'd' || conversion == 'i')
		ft_putnbr(va_arg(args, int), c_count);
	else if (conversion == 'u')
		ft_putunsnbr(va_arg(args, unsigned int), c_count);
	else if (conversion == 'x' || conversion == 'X')
		ft_puthex(va_arg(args, unsigned int), conversion, c_count);
	else if (conversion == '%')
		ft_putchar('%', c_count);
	return (c_count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		c_count;
	va_list	args;

	i = 0;
	c_count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_conversion_type(args, str[i + 1], &c_count);
			i++;
		}
		else
			ft_putchar(str[i], &c_count);
		i++;
	}
	va_end(args);
	return (c_count);
}
