/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:51:51 by tpotilli          #+#    #+#             */
/*   Updated: 2022/12/06 10:54:13 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	This function takes as parameters:
**	
**	char const *s1 -> the array you want to keep
**	char const *set -> the element you want to avoid in s1
**
**	==========================================================================
**	
**	This function will create a new array where set is not in s1.
*/

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (ft_strrchr(set, s1[len]) && len > 0)
		len--;
	str = ft_substr(s1, 0, len + 1);
	return (str);
}

/*int main()
{
	printf("%s\n", ft_strtrim("tripouille   xxx", " x"));
	// printf("%s\n", ft_strtrim("   xxxtripouille   xxx", " x"));
	// printf("%s\n", ft_strtrim("   xxx   xxx", " x"));
	// printf("%s\n", ft_strtrim("", "123"));
	// printf("%s\n", ft_strtrim("123", ""));
	// printf("%s\n", ft_strtrim("", ""));
	// printf("%s\n", ft_strtrim("abcdba", "acb"));
}*/