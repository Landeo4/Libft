/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:44:43 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/16 14:36:03 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	This function takes as parameters:
**	
**	const char *s -> this is the string you want to copy on your new string 
**
**	==========================================================================
**	
**	This function will return a new string by s.
**	The memory will be allocate by malloc.
*/

#include "libft.h"

char *ft_strdup(const char *s)
{
	int i;
	char *str;
	int len;

	len = ft_strlen(s);
	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == 0)
		return (str);
	while (len > i)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}