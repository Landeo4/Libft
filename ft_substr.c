/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:50:17 by tpotillion        #+#    #+#             */
/*   Updated: 2022/12/04 21:25:32 by tpotilli         ###   ########.fr       */
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
**	This function will create a new array of characters 
**	and put a string with a start you choose
**	The new string will have a new first characters because of start
*/

#include "libft.h"

int	ft_check(char const *s, size_t len, unsigned int start)
{
	size_t	i;

	i = 0;
	while (s[start] && i < len)
	{
		i++;
		start++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	len = ft_check(s, len, start);
	string = malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	while (i < len && (start + i) < ft_strlen(s))
	{
		string[i] = s[start + i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

/*int main()
{
	printf("%s",ft_substr("BONJOUR LES HARICOTS !", 8, 14));
}*/