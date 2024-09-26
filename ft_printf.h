/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:37:22 by nperez-d          #+#    #+#             */
/*   Updated: 2024/09/26 17:26:23 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h> //para debug, quitar en la versión definitiva
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
