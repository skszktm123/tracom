/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:52:25 by junskim           #+#    #+#             */
/*   Updated: 2021/04/12 22:49:42 by junskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 1;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] = str[index] + 32;
		index++;
	}
	index = 1;
	while (str[index] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		if (str[index] >= 'a' && str[index] <= 'z')
			if (!(str[index - 1] >= '0' && str[index - 1] <= '9'))
				if (!(str[index - 1] >= 'a' && str[index - 1] <= 'z'))
					if (!(str[index - 1] >= 'A' && str[index - 1] <= 'Z'))
						str[index] = str[index] - 32;
		index++;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	
	char str[] = "gOgO +3Ab+Cdd eFFFF";
	char *result = ft_strcapitalize(str);
	printf("%s\n", result);
}
