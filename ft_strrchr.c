/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:06:59 by tpotilli@st       #+#    #+#             */
/*   Updated: 2022/11/10 17:11:21 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strrchr(const char *s, int c)
{
	int i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		i++;
	}
	while (s[i] == (unsigned char)c)
	{
		i++;
	}
	return (((char *)s + i));
}