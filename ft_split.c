/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:59:52 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/20 17:00:03 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_sep(const char *s, char c)
{
	int i;
	char *string;

	i = 0;
	string = (char *)s;
	while (string[i] == c)
		i++;
	return (string);
}

char	**ft_conv(char const *s, char c, char **split)
{
	int i;
	int index_word;
	int index_letter;

	i = 0;
	index_letter = 0;
	index_word = 0;
	while (s[i])
	{
		split[index_word] = malloc(sizeof(char) * ft_strlen(s));
		while (s[i] != c)
		{
			split[index_word][index_letter] = s[i];
			i++;
			index_letter++;
		}
		split[index_word][index_letter] = '\0';
		index_letter = 0;
		index_letter++;
		ft_sep(s, c);
	}
	return (split);
}

char	**ft_split(char const *s,char c)
{
	char **split;
	int index_word;
	int index_letter;

	index_letter = 0;
	index_word = 0;
	split = malloc(sizeof(char *) * ft_strlen(s));
	if (split == 0)
		return (0);
	ft_sep(s, c);
	split[index_word][index_letter] = '\0';
	return (split);
}
/*
int main()
{
	char **tab;
	int i;

	*tab = "salut les gars";
	i = 0;
	while (i < 10)
	{
		write(1, ft_split(tab[i],'a'),1);
		i++;
	}
	i = 0;
	while (i < 10)
	{
		free(tab[i]);
	}
	free(tab);
}*/