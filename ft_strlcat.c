/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:59:40 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/04 15:13:56 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat (char *dest,const char *src, size_t size)
{
	int i;
	int j;
	int cpt;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
		cpt++;
		if ((int)size <= i)
			return (cpt);
	}
	while (src[j] && (int)size > i)
	{
		dest[i] = src[j];
		i++;
		j++;
		cpt++;
	}
	return (cpt);
}

#include <stdio.h>

int main()
{
	printf("%zu",ft_strlcat("yo","fuck all", 10));
}