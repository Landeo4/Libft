/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:58:21 by tpotilli@st       #+#    #+#             */
/*   Updated: 2022/11/18 09:44:01 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *string;
	unsigned char *string2;

	i = 0;
	string = (unsigned char*) dest;
	string2 = (unsigned char*)src;
	if (!string || !string2)
		return (NULL);
	if (string > string2)
	{
		while (i < n)
		{
			string[n - 1] = string2[n - 1];
			n--;
		}
	}
	else
	{
		i = -1;
		while (++i < n)
			string[i] = string2[i];
	}
	return (dest);
}