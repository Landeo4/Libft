/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotillion <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:01:19 by tpotillion        #+#    #+#             */
/*   Updated: 2022/10/23 18:08:37 by tpotillion       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	else if(c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}