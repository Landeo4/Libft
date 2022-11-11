/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:47:43 by tpotilli@st       #+#    #+#             */
/*   Updated: 2022/11/10 14:10:22 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	unsigned char *str1;
	unsigned char *str2;

	i = 0;
	str1 = ( unsigned char*)s1;
	str2 = ( unsigned char*)s2;
	while (str1[i] == str2[i] && n > (unsigned int)i)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}