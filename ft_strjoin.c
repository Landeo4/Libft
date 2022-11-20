/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:55:13 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/20 16:32:07 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_cpy(char const *s1, char const *s2, char *str)
{
	int	i;
	int	j;

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
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens;
	char	*str;

	lens = ft_strlen(s1);
	if (!s1 || !s2)
		return (0);
	str = malloc(sizeof(char) * lens + ft_strlen(s2) + 1);
	if (str == 0)
		return (NULL);
	ft_cpy(s1, s2, str);
	return (str);
}

/*int main()
{
	char *tab = "salut";
	char *tab2 = "je m'apelle theo";
	printf("%s",ft_strjoin(tab,tab2));	
}*/