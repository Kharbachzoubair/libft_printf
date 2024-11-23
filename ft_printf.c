/* ************************************************************************** */
/*                                                                */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:25:55 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/19 15:51:22 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static void	function_parametr(char c, va_list args, int *count)
{
	if (c == 'c')
		*count += ft_putchar (va_arg(args, int));
	else if (c == 's')
		*count += ft_putstr (va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		*count += ft_putnbr_d (va_arg(args, int));
	else if (c == 'x' || c == 'X')
		*count += ft_putnbr_hex (va_arg(args, unsigned int), c);
	else if (c == 'u')
		*count += ft_putnbr_u (va_arg(args, unsigned int));
	else if (c == 'p')
	{
		*count += ft_putstr ("0x");
		*count += ft_putnbr_p (va_arg(args, unsigned long));
	}
	else
		*count += ft_putchar (c);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	va_start (args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			function_parametr (str[i + 1], args, &count);
			i++;
		}
		else
		{
			ft_putchar (str[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
// #include <stdio.h>
// int main()
// {
//     // ft_printf("Testing char: [%c]\n", 'A');
//     // ft_printf("Testing char: [%c]\n", '\0'); 
//     // ft_printf("Testing string: [%s]\n", "Hello!");
//     // ft_printf("Testing string: [%s]\n", NULL);
//     // ft_printf("Testing int: [%d]\n", 12345);
//     // ft_printf("Testing int: [%d]\n", -12345);
//     // ft_printf("Testing int: [%d]\n", 0);
//     // ft_printf("Testing int: [%d]\n", 2147483647);
//     // ft_printf("Testing int: [%d]\n", -2147483648);
//     // ft_printf("Testing hex (lowercase): [%x]\n", 255);
//     // ft_printf("Testing hex (uppercase): [%X]\n", 255);
//     // ft_printf("Testing unsigned: [%u]\n", 4294967295);
//     // ft_printf("Testing pointer: [%p]\n", 123456);
//     // ft_printf("Testing pointer: [%p]\n", NULL);
//     // ft_printf("Printing percent: [%%]\n");
// 	ft_printf(" %% %% ");
// }