/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:50:17 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/16 13:46:19 by tpotilli         ###   ########.fr       */
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

	i = start;
	len = ft_strlen(s);
	if (len == 0)
		return (0);
	s2 = malloc(sizeof(char) * len + 1);
	if (s2 == NULL)
		return (NULL);
	while (s2[i] && len > i)
	{
		s2[i] = s[i];
		i++;
	}
	return (s2);
}