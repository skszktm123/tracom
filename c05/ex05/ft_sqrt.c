/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 02:01:39 by junskim           #+#    #+#             */
/*   Updated: 2021/04/15 03:03:10 by junskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int	index;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	index = 0;
	while ((index * index) <= (unsigned int)nb)
	{
		index++;
	}
	index -= 1;
	if (index * index == (unsigned int)nb)
	{
		return (index);
	}
	if (index * index != (unsigned int)nb)
	{
		return (0);
	}
}
