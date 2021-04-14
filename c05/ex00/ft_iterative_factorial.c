/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 22:33:44 by junskim           #+#    #+#             */
/*   Updated: 2021/04/15 01:02:26 by junskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int a;
	int factorial;

	a = 1;
	factorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (a <= nb)
	{
		factorial = factorial * a++;
	}
	return (factorial);
}
