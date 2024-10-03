/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:26:04 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/03 13:26:41 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	int				number;
	char			*str;
	unsigned int	uint;
	void			*ptr;
	char			c;
	int				len;

	number = -42;
	str = "Hello, Marvin!";
	uint = 42;
	ptr = (void *)&number;
	c = 'T';

	len = printf(" ");
	printf("counter=%d\n", len);
	len = ft_printf(" ");
	ft_printf("counter=%d\n", len);
	len = printf("Original Simple test\n");
	printf("counter=%d\n", len);
	len = ft_printf("Custom Simple test\n");
	ft_printf("counter=%d\n", len);
	len = printf("Original Character test (c): %c\n", c);
	printf("counter=%d\n", len);
	len = ft_printf("Custom Character test (c): %c\n", c);
	ft_printf("counter=%d\n", len);
	len = printf("Original String test (s): %s\n", str);
	printf("counter=%d\n", len);
	len = ft_printf("Custom String test (s): %s\n", str);
	ft_printf("counter=%d\n", len);
	len = printf("Original Pointer test (p): %p\n", str);
	printf("counter=%d\n", len);
	len = ft_printf("Custom Pointer test (p): %p\n", str);
	ft_printf("counter=%d\n", len);
	len = printf("Original Integer test (d): %d\n", number);
	printf("counter=%d\n", len);
	len = ft_printf("Custom Integer test (d): %d\n", number);
	ft_printf("counter=%d\n", len);
	len = printf("Original Integer test (i): %i\n", number);
	printf("counter=%d\n", len);
	len = ft_printf("Custom Integer test (i): %i\n", number);
	ft_printf("counter=%d\n", len);
	len = printf("Original Unsigned Integer test (u): %u\n", uint);
	printf("counter=%d\n", len);
	len = ft_printf("Custom Unsigned Integer test (u): %u\n", uint);
	ft_printf("counter=%d\n", len);
	len = printf("Original Hex test (x,X): %x - %X\n", number, number);
	printf("counter=%d\n", len);
	len = ft_printf("Custom Hex test (x,X): %x - %X\n", number, number);
	ft_printf("counter=%d\n", len);
	len = printf("Original Double percentage test:\n%% OK\n");
	printf("counter=%d\n", len);
	len = ft_printf("Custom Double percentage test:\n%% OK\n");
	ft_printf("counter=%d\n", len);
	len = printf("Original Null pointer test:\n%p\n", NULL);
	printf("counter=%d\n", len);
	len = ft_printf("Custom Null pointer test:\n%p\n", NULL);
	ft_printf("counter=%d\n", len);
	return (0);
}
