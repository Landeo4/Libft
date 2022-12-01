/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:51:51 by tpotilli          #+#    #+#             */
/*   Updated: 2022/12/01 15:39:20 by tpotilli         ###   ########.fr       */
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

int	ft_up(char const *s1, char const *set)
{
	int j;
	int i;
	int end;

	while (s1[i])
	{
		while (s1[i] == set[j])
		{
			if (ft_strncmp(s1, set, ft_strlen(s1)) == 0)
				return (0);
			i++;
			end++;
		}
	}
	return (0);
}

int ft_down(char const *s1, char const *set)
{
	int start;
	int j;
	int len;

	len = ft_strlen(s1);
	j = 0;
	start = 0;
	while (start < len && set[j])
	{
		j = 0;
		while (s1[start] != set[j] && set[j])
			j++;
		if (s1[start] == set[j])
			start++;
	}
	return (start);
}

char	*ft_cpy(char const *s1, char const *set, char *str)
{
	int		i;
	int		u;
	int		j;
	
	i = 0;
	u = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i] == set[j])
			j++;
		if (s1[i] != set[j])
		{
			str[u] = s1[i];
			u++;
		}
		i++;
	}
	str[u] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*string;
	int		len;

	if (!s1 || !set)
		return (NULL);
	len = (ft_down(s1, set) + ft_up(s1, set));
	string = malloc(sizeof(char) * len + 2);
	if (string == NULL)
		return (NULL);
	ft_cpy(s1, set, string);
	return (string);
}

int main()
{
	printf("%i",ft_up("   xxxtripouille", " x"));
}