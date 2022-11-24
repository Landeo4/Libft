/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:45:02 by tpotilli@st       #+#    #+#             */
/*   Updated: 2022/11/24 03:34:57 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	nbr;

	nbr = n;
	len = ft_len(nbr);
	if (nbr < 0)
		nbr *= -1;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len - 1 >= 0)
	{
		str[len - 1] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*
int main()
{
	printf("%s",ft_itoa(-456465));
}*/