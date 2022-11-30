/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:51:51 by tpotilli          #+#    #+#             */
/*   Updated: 2022/11/30 14:22:57 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	This function takes as parameters:
**	
**	size_t nmemb -> the number of elements in the array that it will allocate
**	size_t size -> the size in bytes of each array element
**
**	==========================================================================
**	
**	This function will allocate an array of "nmemb" element of size "size"
**	And will then fill the allocated array with 0 and then return it.
**	pas bon =(
*/

#include "libft.h"

static int	ft_size(char const *s1, char const *set)
{
	int i;
	int j;
	int len;

	len = 0;
	j = 0;
	i = 0;
	while (s1[i])
	{
		while (s1[i] == set[j])
		{
			j++;
			i++;
		}
		j = 0;
		i++;
		len++;
	}
	len++;
	return (len);
}

static char	*ft_sep(char const *s1, char const *set, char *str, size_t c)
{
	size_t 	i;
	size_t 	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		if (s1[i] != set[j])
		{
			str[c] = s1[i];
			c++;
			i++;
		}
		while (s1[i] == set[j])
		{
			j++;
			i++;	
		}
	}
	str[c] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*string;
	int		len;
	size_t	c;

	c = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_size(s1, set);
	string = malloc(sizeof(char) * len);
	if (string == NULL)
		return (NULL);
	ft_sep(s1, set, string, c);
	return (string);
}


// trouver une solution pour le malloc