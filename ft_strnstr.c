/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:59:28 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/14 11:03:58 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	int j;

	i = 0;
	j = 0;
	if (little == NULL || big == NULL)
		return ((char*)big);
	while (big[i] && little[j] && len > i)
	{
		while (big[i] == little[j])
		{
			if (little[j] == big[i])
				return ((char*)&big[i]);
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}