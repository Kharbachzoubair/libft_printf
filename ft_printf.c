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

void	function_parametr(char c, va_list args, int *count)
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
