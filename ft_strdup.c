/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:44:43 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/14 17:03:38 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	int i;
	char *str;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == 0)
		return (str);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}