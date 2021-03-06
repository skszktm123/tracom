/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:45:29 by junskim           #+#    #+#             */
/*   Updated: 2021/04/14 22:19:24 by junskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

bool	interpace(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
		{
			return (true);
		}
		str++;
	}
	return (false);
}

bool	space(char c)
{
	return (interpace(c, "\n\t\v\f\r "));
}

bool	check_minus(char c)
{
	return (interpace(c, "+-"));
}

bool	number(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi(char *str)
{
	int minus;
	int result;

	minus = 1;
	result = 0;
	while (space(*str))
	{
		str++;
	}
	while (check_minus(*str))
	{
		if (*str == '-')
		{
			minus *= -1;
		}
		str++;
	}
	while (number(*str))
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * minus);
}
