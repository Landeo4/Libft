/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotillion <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:02:53 by tpotillion        #+#    #+#             */
/*   Updated: 2022/10/26 17:40:13 by tpotillion       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;
	unsigned char *string;
	const char *string2;

	i = 0;
	string = dest;
	string2 = src;
	while (string[i] && string2[i] && (int)n < i)
	{
		if (string[i] == c)
			return (dest);
		string[i] = string2[i];
		i++;
	}
	return (0);
}