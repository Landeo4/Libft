/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:50:17 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/22 13:55:43 by tpotilli         ###   ########.fr       */
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

/*static int	ft_len(char const *s, unsigned int start, size_t len)
{
	size_t i;

	i = start;
	while (s[i] && i < len)
		i++;
	return (i);
}*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *string;
	size_t i;

	i = 0;
	if (!s)
		return (0);
	if (len < start)
		return (ft_strdup(""));
	string = malloc(sizeof(char) * (len + 1));
	len = len + start;
	if (!string)
		return (NULL);
	while (s[start] && i < len)
	{
		string[i] = s[start];
		start++;
		i++;
		if (len == start)
			break;
	}
	string[i] = '\0';
	return (string);
}

/*int main()
{
	printf("%s",ft_substr("BONJOUR LES HARICOTS !", 8, 14));
}*/