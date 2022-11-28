/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:59:40 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/28 12:40:20 by tpotilli         ###   ########.fr       */
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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	len2;

	len2 = ft_strlen(src);
	len = 0;
	if (size == 0)
		return (len + len2);
	while (dest[len] && len < size)
		len++;
	i = len;
	while (i < size - 1 && src[i - len])
	{
		dest[i] = src[i - len];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	return (len + len2);
}

/*size_t	ft_strlcat(char *dest,const char *src, size_t size)
{
	size_t i;
	size_t len;
	size_t len2;

	len = 0;
	len2 = ft_strlen(src);
	if (size == 0)
		return (len + len2);
	while (dest[len] && len < size)
		len++;
	i = len;
	while (i < size - 1 && src[i - len])
	{
		dest[i] = src[i - len];
		i++;
	}
	if (i < size)
		dest[i + len] = '\0';
	return (len + len2);
}
*/
/*
#include <bsd/string.h>

int main()
{
	char *dest = "CCCCCCCCCCC";
	char *src = "AAAAAAAAAAA";
	printf("%li", strlcat(dest, src, -1));
	printf("%li \n",ft_strlcat(dest, src, -1));
}*/