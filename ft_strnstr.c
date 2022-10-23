/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotillion <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:59:28 by tpotillion        #+#    #+#             */
/*   Updated: 2022/10/14 14:30:32 by tpotillion       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (big[i])
	{
		while (big[i] == little[j])
		{
			if (little[j] == '\0')
				return (big[i + j]);
			j++;
		}
		i++;
		j = 0;
	}
}