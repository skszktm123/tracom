/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:06:30 by junskim           #+#    #+#             */
/*   Updated: 2021/04/14 19:20:19 by junskim          ###   ########.fr       */
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

	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index]);
		write(1, "\n", 1);
		index++;
	}
}
