/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:09:41 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/14 14:09:27 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	int len;

	i = 0;
	len = ft_strlen(src);
	if (dest[i] == 0 && src[i] == 0)
		return (0);
	if (size <= 0)
		return (len);
	while (src[i] && dest[i] && i <= (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}