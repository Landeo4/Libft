/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:51:51 by tpotilli          #+#    #+#             */
/*   Updated: 2022/11/21 14:09:32 by tpotilli         ###   ########.fr       */
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
*/

#include "libft.h"

static int	ft_size(char const *s1, char const *set)
{
	int i;
	int len;
	int j;

	j = 0;
	len = 0;
	i = 0;
	while (s1[i])
	{
		i++;
		len++;
		while (s1[i] == set[j])
		{
			i++;
			j++;
		}
		j = 0;
	}
	return (len);
}

static char	*ft_sep(char const *s1, char const *set, char *string)
{
	size_t i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s1[i] != set[j])
		{
			string[i] = s1[i];
			i++;
		}
		while (s1[i] == set[j])
		{
			i++;
			j++;
		}
		j = 0;
	}
	string[i] = '\0';
	return (string);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*string;
	int		len;

	if (!s1 || !set)
		return (0);
	len = ft_size(s1, set);
	string = malloc(sizeof(char) * len);
	ft_sep(s1, set, string);
	return (string);
}

/*
int main()
{
	printf("%s",ft_strtrim("   xxxtripouille xxx", "xxx"));
}

// trouver une solution pour le malloc */