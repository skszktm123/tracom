/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:48:13 by junskim           #+#    #+#             */
/*   Updated: 2021/04/14 14:49:00 by junskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int		ft_atoi_base(char *str, char *base)
{
	int	radix;
	int	result;
	int	minus;
	int	resolved;

	if (!is_base_valid(base))
		return (0);
	radix = ft_strlen(base);
	result = 0;
	minus = 1;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while ((resolved = resolve_base(base, *str)) != NO_MATCH)
	{
		result *= radix;
		result += resolved;
		str++;
	}
	return (result * minus);
}
