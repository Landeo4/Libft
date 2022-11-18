/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:44:43 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/18 13:35:48 by tpotilli         ###   ########.fr       */
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

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}