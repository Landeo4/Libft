/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:40:54 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/09 10:22:12 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int i;
	char	*str;

	i = ft_strlen(s);
	if (s == NULL || f == NULL)
		return (NULL);
	str = malloc(sizeof(char) * ft_strlen(s));
	while(i > 0)
	{
		str[i] = f(i, s[i]);
		i--;
	}
	return (str);
}