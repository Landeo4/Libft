/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:50:17 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/17 15:58:36 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	This function takes as parameters:
**	
**	char const *s -> the string you want to extract in the new array
**	unsigned int start -> the start of the new string
**	size_t len -> the total size of s
**
**	==========================================================================
**	
**	This function will create a new array of characters and put a string with a start you choose
**	The new string will have a new first characters because of start
*/

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *s2;
	size_t i;
	unsigned j;

	j = 0;
	i = start;
	len = ft_strlen(s);
	if (len == 0)
		return (0);
	if (!s)
		return (NULL);
	s2 = malloc(sizeof(char) * len + 1);
	if (s2 == NULL)
		return (NULL);
	while (s[i] && len + start > i)
	{
		s2[j] = s[i];
		i++;
		j++;
	}
	s2[j] = '\0';
	return (s2);
}