/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:44:43 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/10 17:02:59 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	int i;
	char *str;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s));
	if (str == 0)
		return (str);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	
	return (str);
}