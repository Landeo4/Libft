/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:59:40 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/24 08:02:31 by tpotilli         ###   ########.fr       */
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

size_t	ft_strlcat(char *dest,const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(src);
	if (!dest || !src)
		return (len);
	if ((size - 1) <= len)
		return (len2 + size);
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i + len] = src[i];
			i++;
		}
	}
	return (len + len2);
}
