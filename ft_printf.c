/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:29:57 by nperez-d          #+#    #+#             */
/*   Updated: 2024/09/24 17:26:17 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_conversion_type(va_list args, char *str)
{
	int	char_count;

	if (*str == 'c')
		char_count += ft_putchar((char) va_arg(args, int));
	if (*str == 's')
		char_count += ft_putstr(va_arg(args, char *));
	if (*str == 'p')
		char_count += ;
	if (*str == 'd')
		char_count += ;
	if (*str == 'i')
		char_count += ;
	if (*str == 'u')
		char_count += ;
	if (*str == 'x')
		char_count += ;
	if (*str == 'X')
		char_count += ;
	if (*str == '%')
		char_count += ;
}

int	ft_printf(char const *str, ...)
{
	int		char_count;
	va_list	args;

	char_count = 0;
	if (str == NULL)
		return (-1);
	va_start(args, str);
	while (*str)
	{
		if (*str != '%')
			char_count += ft_putchar(*str);
		else
		{
			str++;
			char_count += ft_conversion_type(args, (char *)str);
		}
	}
	va_end(args);
	return (char_count);
}
