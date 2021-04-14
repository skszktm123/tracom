/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:29:02 by junskim           #+#    #+#             */
/*   Updated: 2021/04/08 23:07:01 by junskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	blank(char c)
{
	return (c == ' ' || c == '\t');
}

void	first_word(char *str)
{
	int index;
	int set;
	char *word;

	index = 0;
	word = str;
	while (blank(str[index]))
	{
		index++;
	}
	set = index;
	while (true)
	{
		if (str[index] == '\0')
		{
			break ;
		}
		else if (blank(str[index]))
		{
			break ;
		}
		index++;
	}
	if (word != 0)
	{
		write(1, word + set, index - set);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		first_word(argv[1]);
	}
	write(1, "\n", 1);
}
