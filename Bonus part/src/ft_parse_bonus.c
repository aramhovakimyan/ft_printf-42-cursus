/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:26:39 by ahovakim          #+#    #+#             */
/*   Updated: 2023/02/07 21:49:42 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ft_printf_bonus.h"

static int	is_sharp(const char *str)
{
	if (*str == 'X' || *str == 'x')
		return (1);
	return (0);
}

static int	is_plus(const char *str)
{
	if (*str == 'd' || *str == 'i')
		return (1);
	return (0);
}

static int	is_space(const char *str)
{
	if (*str == 'd' || *str == 'i' || *str == 's')
		return (1);
	else if (*str >= 48 && *str <= 57)
	{
		while (*str >= 48 && *str <= 57)
		{
			str++;
			if (*str == 's' || *str == 'd' || *str == 'i')
				return (1);
		}
	}
	return (0);
}

int		ft_atoi(const char *str)
{
	int	num;
	
	num = 0;
	while (*str == ' ' || *str == '\t' || *str == '\f' ||
			*str == '\r' || *str == '\n' || *str == '\v')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

int	ft_parse_bonus(const char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '#')
				flag = is_sharp(++str);
			else if (*str == ' ')
				flag = is_space(++str);
			else if (*str == '+')
				flag = is_plus(++str);
		}
		if (!flag)
			return (flag);
		str++;
	}
	return (flag);
}
