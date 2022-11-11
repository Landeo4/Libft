/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:50:17 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/09 11:00:23 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *s2;
	int i;

	i = start;
	s2 = malloc(sizeof(char) * len);
	if (s2 == NULL)
		return (NULL);
	while (s2[i])
	{
		s2[i] = s[i];
		i++;
	}
	return ((char*)&s2[start]);
}