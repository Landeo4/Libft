/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:09:41 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/09 10:11:06 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_srtlcpy(char *dest, const char *src, size_t size)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j] && (int)size >= i)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
}