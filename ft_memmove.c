/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:58:21 by tpotilli@st       #+#    #+#             */
/*   Updated: 2022/11/11 14:01:26 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *string;
	const unsigned char *string2;

	i = 0;
	string = dest;
	string2 = src;
	if (string < string2 && n > i)
	{
		while (string[i] && n > i)
		{
			string[i] = string2[i];
			i++;
		}
	}
	i = 0;
	return (dest);
}