/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:12:52 by junskim           #+#    #+#             */
/*   Updated: 2021/04/08 14:02:10 by junskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
		{
			return (1);
		}
		else if (str[index] >= 97 && str[index] <= 122)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		index++;
	}
	return (1);
}
