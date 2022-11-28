/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:33:54 by tpotilli          #+#    #+#             */
/*   Updated: 2022/11/28 15:28:56 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_sep_cmp(char const *s, char c)
{
	long int i;
	long int word;
	
	i = 0;
	word = 1;
	while (s[i] && s[i] == c)
		i++;
	if (c == '\0')
		return (word + 1);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		if (s[i] != c)
			word++;
		i++;
	}
	return (word + 1);
}

/*static char **ft_free(char **split, const char *s)
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
}*/

int	ft_cpt_word(char const *s, char c, int i)
{
	int cpt;

	cpt = 0;
	while (s[i])
	{
		while (s[i] != c)
			i++;
		if (s[i] == c)
		{
			i++;
			cpt++;
		}
	}
	return (cpt + 1);
}

static char	**ft_cpy(char const *s, char c, char **split, int i)
{
	int index_word;
	int index_letter;

	index_word = 0;
	index_letter = 0;
	while (s[i])
	{
		split[index_word] = malloc(sizeof(char) * ft_sep_cmp(s, c));
		//ft_free(split, s);
		while (s[i] != c)
		{
			split[index_word][index_letter] = s[i];
			index_letter++;
			i++;
		}
		split[index_word][index_letter] = '\0';
		index_letter = 0;
		index_word++;
		while (s[i] == c)
			i++;
	}
	split[index_letter] = '\0';
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char **split;
	int i;
	int len;

	if (!s)
		return (NULL);
	len = ft_sep_cmp(s, c);
	i = 0;
	if (len == 1 || c == '\0')
	{
		split = malloc(sizeof(NULL));
		return split;
	}
	split = malloc(sizeof(char *) * ft_cpt_word(s, c, i));
	while (s[i] == c)
		i++;
	ft_cpy(s, c, split, i);
	return (split);
}

/*
int main()
{
	printf("%i",ft_cpt_word("salut les gars", ' ', 0));
}*/

int main(void)
{
    char **str = ft_split("hello comment ca va ?", 'a');
    int i = 0;
    int j = 0;
    while (str[i])
    {
        while (str[i][j])
        {
            printf("%c", str[i][j]);
            j++;
        }
        i++;
        j = 0;
        printf("\n");
    }
    while (i >= 0)
    {
        free(str[i]);
        i--;
    }
    free(str);
}