/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:59:28 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/09 10:44:36 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (little == NULL || big == NULL)
		return ((char*)big);
	while (big[i] && len > 0)
	{
		while (big[i] == little[j])
		{
			if (little[j] == big[i])
				return ((char*)&big[i]);
			j++;
		}
		i++;
		len--;
		j = 0;
	}
	return (NULL);
}