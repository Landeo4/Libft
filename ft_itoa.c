/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:45:02 by tpotilli@st       #+#    #+#             */
/*   Updated: 2022/11/10 21:32:26 by tpotilli@st      ###   ########.fr       */
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

	lens = 
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