/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:27:38 by junskim           #+#    #+#             */
/*   Updated: 2021/04/11 15:34:45 by junskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 1;
	while (str[index] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		else if (str[index] >= 97 && str[index] <= 122 && str[index - 1] == 32)
		{
			str[index] = str[index] - 32;
		}
		else if (str[index] >= 97 && str[index] <= 122 && str[index - 1] == 43)
		{
			str[index] = str[index] - 32;
		}
		else if (str[index] >= 97 && str[index] <= 122 && str[index - 1] == 45)
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
