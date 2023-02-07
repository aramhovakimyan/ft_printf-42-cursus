/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:25:10 by ahovakim          #+#    #+#             */
/*   Updated: 2023/02/07 21:48:55 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ft_printf.h"

int	ft_check(const char *str, va_list arg)
{
	int	count;

	count = 0;
	if (*str == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (*str == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (*str == 'd' || *str == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (*str == 'x')
		count += ft_hex((unsigned long long)va_arg(arg, unsigned int), 1);
	else if (*str == 'X')
		count += ft_hex((unsigned long long)va_arg(arg, unsigned int), 0);
	else if (*str == '%')
		count += ft_putchar('%');
	else if (*str == 'u')
		count += ft_putnbr_u(va_arg(arg, unsigned int));
	else if (*str == 'p')
		count += ft_ptr(va_arg(arg, unsigned long long));
	return (count);
}
