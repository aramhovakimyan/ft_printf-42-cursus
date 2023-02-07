/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:26:47 by ahovakim          #+#    #+#             */
/*   Updated: 2023/02/07 21:49:45 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ft_printf_bonus.h"

int	is_pers(const char *str, va_list arg)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += ft_check_flags(str, arg);
			if (*str == ' ' || *str == 'd' || *str == 'i' 
				|| (*str >= 48 && *str <= 57))
				while (*str == ' ' || (*str >= 48 && *str <= 57))
					++str;
			else
				str++;
		}
		else
			count += ft_putchar(*str);
		str++;
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		count;

	count = 0;
	if (!ft_parse_bonus(str))
		return (0);
	va_start(arg, str);
	count += is_pers(str, arg);
	va_end(arg);
	return (count);
}
