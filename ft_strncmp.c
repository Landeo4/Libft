/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:13:44 by tpotilli          #+#    #+#             */
/*   Updated: 2022/11/12 14:14:40 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
	if (s1 == 0 || s2 == 0 || n == 0)
		return (0);
    while (s1[i] == s2[i] && i < n - 1)
    {
		if (s1[i] == s2[i])
			i++;
		else
			break;
    }
    return (s1[i] - s2[i]);
}