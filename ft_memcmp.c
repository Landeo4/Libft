/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:47:43 by tpotilli@st       #+#    #+#             */
/*   Updated: 2022/12/05 03:04:58 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	This function takes as parameters:
**	
**	const void *s1 -> the array of characters you want to compare to s2
**	const void *s2 -> the second array of characters, you want to compare it to s1
**	size_t n -> the numbers of characters you want to compare
**
**	=====================================================================
**	
**	This function will compare the n first characters between s1 and s2
**	the function return and integer less than , equal or greater than zero
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < (n - 1))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}
/*
int main()
{
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	printf("%i",ft_memcmp(s2,s3, 4));
}*/