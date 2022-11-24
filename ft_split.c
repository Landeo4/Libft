/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:33:54 by tpotilli          #+#    #+#             */
/*   Updated: 2022/11/24 06:02:15 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sep(char *s, char c, int i)
{
	while (s[i] == c)
		i++;
	return (i);
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

static int	ft_len_word(char const *s, char c, int i)
{
	int cpt;

	cpt = 0;
	while (s[i] != c)
	{
		i++;
		cpt++;	
	}
	cpt++;
	return (cpt);
}

static char	**ft_cpy(char const *s, char c, char **split, int i)
{
	int index_word;
	int index_letter;

	index_word = 0;
	index_letter = 0;
	while (s[i])
	{
		ft_sep((char *)s, c, i);
		split[index_word] = malloc(sizeof(char) * ft_len_word(s, c, i));
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