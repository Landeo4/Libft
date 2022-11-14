/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:59:40 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/14 10:00:59 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest,const char *src, size_t size)
{
	size_t i;
	int j;
	int cpt;
	int len;

	i = 0;
	j = 0;
	len = ft_strlen(src);
	cpt = 0;
	while (dest[i])
	{
		i++;
		cpt++;
		if (size <= i)
			return (cpt);
	}
	while (src[j] && size > i)
	{
		dest[i] = src[j];
		i++;
		j++;
		cpt++;
	}
	return (cpt + len);
}