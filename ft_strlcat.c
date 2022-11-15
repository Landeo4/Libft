/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:59:40 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/15 20:53:39 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest,const char *src, size_t size)
{
	size_t i;
	int len;
	int len2;

	i = 0;
	len = ft_strlen(src);
	len2 = ft_strlen(dest);
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (len + len2);
}