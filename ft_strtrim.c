/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:51:51 by tpotilli          #+#    #+#             */
/*   Updated: 2022/11/16 12:05:36 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    char *string;

    i = 0;
    string = malloc(sizeof(char) * ft_strlen(s1 + 1));
    while (string[i])
    {
        while (string[i] && set[i])
        {
            if (string[i] == set[i])
            {
                string[i] = '\0';
            }
            i++;
        }
        i++;
    }
    return (string);
}