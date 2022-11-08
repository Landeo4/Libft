/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:40:54 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/04 15:36:26 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

char *ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int i;
	char *string;
	int len;

	len = f(i, string + i);
	i = 0;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	ft_strcpy(s, f(i, string));
	return (s);
}