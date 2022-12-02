/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:33:54 by tpotilli          #+#    #+#             */
/*   Updated: 2022/12/02 16:11:20 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_letter(char const *s, char c)
{
	long int i;
	long int letter;

	i = 0;
	letter = 1;
	if (c == '\0')
		return (letter + 1);
	while (s[i] != c)
		letter++;
	return (letter);
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
	int word;

	word = 0;
	while (s[i])
	{
		while (s[i] != c)
			i++;
		word++;
	}
	return (word + 1);
}

static char	**ft_cpy(char const *s, char c, char **split, int i)
{
	int index_word;
	int index_letter;

	index_word = 0;
	index_letter = 0;
	while (s[i])
	{
		split[index_word] = malloc(sizeof(char *) * ft_letter(s, c));
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
	i = 0;
	len = ft_cpt_word(s, c, i);
	if (len == 1 || c == '\0')
	{
		split = malloc(sizeof(NULL));
		return split;
	}
	split = malloc(sizeof(char) * len);
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
    char **str = ft_split("  tripouille  42  ", ' ');
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