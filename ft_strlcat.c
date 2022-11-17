/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:59:40 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/17 16:23:24 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	This function takes as parameters:
**	
**	char *dest -> the string you want to be concatenate by src
**	const char *src -> the string you copy in dest
**	size_t size -> the size of the copy
**
**	==========================================================================
**	
**	This function will concatenate src (source) in dest (destination)
**	Then the function will return the len of the copy
*/

#include "libft.h"

size_t ft_strlcat(char *dest,const char *src, size_t size)
{
	size_t i;
	int len;
	int len2;

	i = 0;
	len = ft_strlen(src);
	len2 = ft_strlen(dest);
	if (!dest || !src)
		return (len);
	while (dest[i])
		i++;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	return (len + len2);
}