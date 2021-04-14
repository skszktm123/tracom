/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 03:03:56 by junskim           #+#    #+#             */
/*   Updated: 2021/04/15 04:16:24 by junskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		index;
	int		count;

	count = 0;
	index = 1;
	if (nb == 1 || nb <= 0)
		return (0);
	while (index <= nb)
	{
		if ((nb % index) == 0)
		{
			count++;
			index++;
		}
		else if ((nb % index) != 0)
		{
			index++;
		}
	}
	if (count > 2)
		return (0);
	if (count <= 2)
		return (1);
	return (0);
}
