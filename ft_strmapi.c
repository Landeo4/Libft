/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:25:37 by tpotilli          #+#    #+#             */
/*   Updated: 2022/11/20 17:08:46 by tpotilli@st      ###   ########.fr       */
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
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while(i > 0)
	{
		str[i] = f(i, s[i]);
		i--;
	}
	str[i] = '\0';
	return (str);
}