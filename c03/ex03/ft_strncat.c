/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junskim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:52:08 by junskim           #+#    #+#             */
/*   Updated: 2021/04/11 22:55:32 by junskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *cat;

	cat = dest;
	while (*cat != '\0')
	{
		cat++;
	}
	while (*src != '\0' && nb > 0)
	{
		*cat = *(unsigned char *)src;
		cat++;
		src++;
		nb--;
	}
	*cat = '\0';
	return (dest);
}
