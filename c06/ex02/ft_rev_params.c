/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:22:31 by junskim           #+#    #+#             */
/*   Updated: 2021/04/14 19:36:55 by junskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int		main(int argc, char **argv)
{
	int index;

	index = argc - 1;
	while (index >= 1)
	{
		ft_putstr(argv[index]);
		write(1, "\n", 1);
		index--;
	}
}
