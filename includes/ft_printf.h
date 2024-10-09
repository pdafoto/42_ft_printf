/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:37:22 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/09 12:38:05 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *format, ...);
void	ft_conversion_type(va_list args, const char conversion, int *c_count);
void	ft_putchar(int c, int *char_count);
void	ft_putstr(char *s, int *c_count);
void	ft_putpointer(unsigned long long pointer, int *c_count);
void	ft_puthex(unsigned int n, char conversion, int *c_count);
void	ft_putnbr(int n, int *c_count);
void	ft_putunsnbr(unsigned int n, int *c_count);

#endif
