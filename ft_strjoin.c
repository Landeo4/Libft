/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:55:13 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/14 16:31:16 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_cpy(char const *s1, char const *s2, char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	return (str);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int lens;
	char *str;

	lens = ft_strlen(s1);
	i = 0;
	while (lens)
		i++;
	str = malloc(sizeof(char) * lens + ft_strlen(s2));
	if (str == 0)
		return (str);
	ft_cpy(s1, s2, str);
	return (str);
}

#include <stdio.h>

int main()
{
	char *tab = "salut";
	char *tab2 = "je m'apelle theo";
	printf("%s",ft_strjoin(tab,tab2));	
}