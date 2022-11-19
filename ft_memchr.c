/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:42:33 by tpotilli@st       #+#    #+#             */
/*   Updated: 2022/11/19 10:57:20 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	This function takes as parameters:
**	
**	const void *s -> the string where you want to search c
**	int c -> the number you want to search in s
**	size_t n -> the size you want to use
**
**	==========================================================================
**	
**	This function will search s in the string c
**	Then you will return the place where you found c in s.
**	If you found nothing it will return NULL.
*/

#include "libft.h"

/*void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *str;
	//unsigned int *tab;

	if (s == NULL)
		return (NULL);
	str = (unsigned char*)s;
	//tab = (unsigned int*)s;
	i = 0;
	while(((unsigned char)s[i]) && i < n)
	{
		if ((unsigned char)s[i] == c)
			return (&(unsigned char)str[i]);
		i++;
	}
	return (NULL);
}*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (*(p + i) == (unsigned char)c)
			return (p + i);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int main()
{
	int tab[7] = {1, -56, 45, 78, 2};

	printf("%s",(char *)ft_memchr(tab, 45, 3));
}*/