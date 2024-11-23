/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numfunctions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 07:53:14 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/23 13:07:25 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_d(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar ('-');
		count++;
		n = -n;
	}
	if (n >= 10)
		count += ft_putnbr_d(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}

int	ft_putnbr_hex(unsigned int n, char flag)
{
	int		count;
	char	*arr;

	count = 0;
	if (flag == 'x')
		arr = "0123456789abcdef";
	else
		arr = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_putnbr_hex (n / 16, flag);
	count += ft_putchar (arr[n % 16]);
	return (count);
}

int	ft_putnbr_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_u (n / 10);
	count += ft_putchar (n % 10 + '0');
	return (count);
}

int	ft_putnbr_p(unsigned long n)
{
	char	*arr;
	int		count;

	arr = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_putnbr_p (n / 16);
	count += ft_putchar (arr[n % 16]);
	return (count);
}
