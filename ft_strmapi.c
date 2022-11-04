/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:40:54 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/03 19:43:58 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int i;
	char *string;

	i = 0;
	while (s[i])
	{
		s[i] = f(i,string);
		i++;
	}
	return (s);
}