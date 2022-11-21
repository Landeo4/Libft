/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:25:37 by tpotilli          #+#    #+#             */
/*   Updated: 2022/11/16 12:25:39 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	This function takes as parameters:
**	
**	char const *s -> the string you want to apply the "f" function
**	char (*f) (unsigned int, char) -> f is the function you want to apply at each characters of s
**
**	==========================================================================
**	
**	This function will replace each characters of the string s with the function f
*/

#include "libft.h"

char *ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int i;
	char	*str;

	i = ft_strlen(s);
	if (s == NULL || f == NULL)
		return (NULL);
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while(i > 0)
	{
		str[i] = f(i, s[i]);
		i--;
	}
	return (str);
}