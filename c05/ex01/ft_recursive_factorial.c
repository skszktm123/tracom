/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 22:50:02 by junskim           #+#    #+#             */
/*   Updated: 2021/04/15 01:03:00 by junskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_factorial(int factorial, int index)
{
	factorial *= index--;
	while (index > 0)
	{
		return (ft_factorial(factorial, index));
	}
	return (factorial);
}

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (ft_factorial(1, nb));
}
