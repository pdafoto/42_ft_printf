/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_wrtutils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:52:08 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/09 14:03:54 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	char_count;

	char_count = 0;
	write(1, &c, 1);
	char_count++;
	return (char_count);
}

int	ft_putstr(char *s)
{
	int	char_count;

	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	char_count = 0;
	while (s[char_count])
	{
		write(1, &s[char_count], 1);
		char_count++;
	}
	return (char_count);
}
