/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:37:22 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/09 13:53:39 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *format, ...);
int	ft_conversion_type(va_list args, char *str);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putpointer(void *pointer);
int	ft_puthex(unsigned long n, char specifier);
int	ft_putnbr(int n);
int	ft_putunsnbr(unsigned int n);

#endif
