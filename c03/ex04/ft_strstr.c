/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:59:00 by junskim           #+#    #+#             */
/*   Updated: 2021/04/12 12:36:33 by junskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *sub;
	char *fsub;

	if (*to_find == '\0')
	{
		return (str);
	}
	sub = str;
	fsub = to_find;
	while (true)
	{
		if (*sub == '\0')
			return ((char *)(sub - (fsub - to_find)));
		if (*sub == *fsub)
			fsub++;
		else
			fsub = to_find;
		if (*sub == '\0')
			break ;
		sub++;
	}
	return (0);
}
