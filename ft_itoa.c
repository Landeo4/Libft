/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:45:02 by tpotilli@st       #+#    #+#             */
/*   Updated: 2022/11/11 11:41:06 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_reverse(char *tab, int i)
{
	char *tmp;
	int j;

	j = 0;
	while (tab[i])
	{
		tmp[j] = tab[i];
		i--;
		j++;
	}
}

int ft_lenght(int n)
{
	unsigned int lengh;

	lens = 0;
}

char *ft_w(int n)
{
	
}

char *ft_itoa(int n)
{
	int i;
	char *tab;
	int lens;

	lens = ft_lens(n);
	i = 0;
	tab = malloc(sizeof(char) * lens);
	if (tab == 0)
		return (0);
	if (n < 0)
	{
		tab[i] = '-';
		n *= -1;
	}
	
}