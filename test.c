/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:26:04 by nperez-d          #+#    #+#             */
/*   Updated: 2024/10/03 12:01:45 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int		number;
	char	*str;

	number = 42;
	str = "Hello, World!";

	printf("Number: %d\nString: %s\n", number, str);
	ft_printf("Number: %d\nString: %s\n", number, str);
	return (0);
}
