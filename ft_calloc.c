/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli@student42.fr  <marvin@42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:02:31 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/10 17:02:38 by tpotilli@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	This function takes as parameters:
**	
**	size_t nmemb -> the number of elements in the array that it will allocate
**	size_t size -> the size in bytes of each array element
**
**	==========================================================================
**	
**	This function will allocate an array of "nmemb" element of size "size"
**	And will then fill the allocated array with 0 and then return it.
*/

void *ft_calloc(size_t nmemb, size_t size)
{
	void *tab;

	tab = malloc(size * nmemb);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, size * nmemb);
	return (tab);
}