/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:33:54 by tpotilli          #+#    #+#             */
/*   Updated: 2022/11/21 10:25:18 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_sep(char **split, char c, int index_letter, int index_word)
{
	int i;

	while (split[index_word][index_letter] == c)
		i++;
	return (split);
}

static char **ft_free(char **split, const char *s)
{
	int i;
	int index_word;

	i = 0;
	index_word = 0;
	while (s[i])
	{
		free(split[index_word]);
		i++;
	}
	free(split);
	return (NULL);
}

static char	**ft_cpy(char const *s, char c, char **split, int i)
{
	int index_word;
	int index_letter;

	index_word = 0;
	index_letter = 0;
	while (s[i])
	{
		ft_sep(split, c, index_letter, index_word);
		split[index_word] = malloc(sizeof(char) * ft_strlen(s) + 1);
		ft_free(split, s);
		while (s[i] != c)
		{
			split[index_word][index_letter] = s[i];
			index_letter++;
			i++;
		}
		split[index_word][index_letter] = '\0';
		index_letter = 0;
		index_word++;
		i++;
	}
	split[index_letter] = '\0';
	return (split);
}

char	**ft_split(char const *s,char c)
{
	char **split;
	int i;

	i = 0;
	split = malloc(sizeof(char *) * ft_strlen(s) + 1);
	ft_cpy(s, c, split, i);
	return (split);
}


/*int main()
{
	char **tab;
	int i;

	*tab = "salut les gars";
	i = 0;
	while (i < 20)
	{
		write(1, ft_split(tab[i], 'a'), 1);
		i++;
	}
	i = 0;
	while (i < 20)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}*/