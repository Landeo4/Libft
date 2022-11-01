/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotillion <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:52:13 by tpotillion        #+#    #+#             */
/*   Updated: 2022/10/26 17:25:25 by tpotillion       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_atoi(const char *nptr)
{
	int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] >= 9 && nptr[i] <= 13 && nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
		sign *= -1;
	while (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result = nptr[i] - '0';
		i++;
	}
	return (result * sign);
}