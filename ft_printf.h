/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkharbac <zkharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:22:53 by zkharbac          #+#    #+#             */
/*   Updated: 2024/11/22 18:27:58 by zkharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_printf(const char *str, ...);
int	ft_putstr(char *str);
int	ft_putnbr_d(int n);
int	ft_putnbr_hex(unsigned int n, char flag);
int	ft_putnbr_u(unsigned int n);
int	ft_putnbr_p(unsigned long n);

#endif
