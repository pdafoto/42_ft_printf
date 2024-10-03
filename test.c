/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:26:04 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/03 16:42:34 by nperez-d         ###   ########.fr       */
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

	ft_printf("--------------------------------------------------------------");
	len = printf(" ");
	printf("counter=%d\n", len);
	len = ft_printf(" ");
	ft_printf("counter=%d\n", len);
	ft_printf("--------------------------------------------------------------");
	len = printf("Simple test\n");
	printf("counter=%d\n", len);
	len = ft_printf("Simple test\n");
	ft_printf("counter=%d\n", len);
	ft_printf("--------------------------------------------------------------");
	len = printf("Character test (c): %c\n", c);
	printf("counter=%d\n", len);
	len = ft_printf("Character test (c): %c\n", c);
	ft_printf("counter=%d\n", len);
	ft_printf("--------------------------------------------------------------");
	len = printf("String test (s): %s\n", str);
	printf("counter=%d\n", len);
	len = ft_printf("String test (s): %s\n", str);
	ft_printf("counter=%d\n", len);
	ft_printf("--------------------------------------------------------------");
	len = printf("Pointer test (p): %p\n", str);
	printf("counter=%d\n", len);
	len = ft_printf("Pointer test (p): %p\n", str);
	ft_printf("counter=%d\n", len);
	ft_printf("--------------------------------------------------------------");
	len = printf("Integer test (d): %d\n", number);
	printf("counter=%d\n", len);
	len = ft_printf("Integer test (d): %d\n", number);
	ft_printf("counter=%d\n", len);
	ft_printf("--------------------------------------------------------------");
	len = printf("Integer test (i): %i\n", number);
	printf("counter=%d\n", len);
	len = ft_printf("Integer test (i): %i\n", number);
	ft_printf("counter=%d\n", len);
	ft_printf("--------------------------------------------------------------");
	len = printf("Unsigned Integer test (u): %u\n", uint);
	printf("counter=%d\n", len);
	len = ft_printf("Unsigned Integer test (u): %u\n", uint);
	ft_printf("counter=%d\n", len);
	ft_printf("--------------------------------------------------------------");
	len = printf("Hex test (x,X): %x/%X\n", number, number);
	printf("counter=%d\n", len);
	len = ft_printf("Hex test (x,X): %x/%X\n", number, number);
	ft_printf("counter=%d\n", len);
	ft_printf("--------------------------------------------------------------");
	len = printf("Double percentage test:\n%% OK\n");
	printf("counter=%d\n", len);
	len = ft_printf("Double percentage test:\n%% OK\n");
	ft_printf("counter=%d\n", len);
	ft_printf("--------------------------------------------------------------");
	len = printf("Null pointer test:\n%p\n", NULL);
	printf("counter=%d\n", len);
	len = ft_printf("Null pointer test:\n%p\n", NULL);
	ft_printf("counter=%d\n", len);
	ft_printf("--------------------------------------------------------------");
	len = printf("Full test (c,s,p,d,i,u,x,X): %c/%s/%p/%d/%i/%u/%x/%X\n", c, str, str, number, number, uint, uint, uint);
	printf("counter=%d\n", len);
	len = ft_printf("Full test (c,s,p,d,i,u,x,X): %c/%s/%p/%d/%i/%u/%x/%X\n", c, str, str, number, number, uint, uint, uint);
	ft_printf("counter=%d\n", len);
	ft_printf("--------------------------------------------------------------");
	return (0);
}
