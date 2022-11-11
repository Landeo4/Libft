/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:02:53 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/09 15:40:24 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *destination, const void *source, size_t size )
{
    size_t            i;
    unsigned char    *tmp1;
    unsigned char    *tmp2;

    tmp1 = (unsigned char *)destination;
    tmp2 = (unsigned char *)source;
    if (!size || destination == source)
        return (destination);
    i = 0;
    if (size == 0)
        return (tmp1);
    while (i < size)
    {
        tmp1[i] = tmp2[i];
        i++;
    }
    return (tmp1);
}