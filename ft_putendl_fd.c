/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:37:12 by tpotillion        #+#    #+#             */
/*   Updated: 2022/11/18 15:22:33 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	This function takes as parameters:
**	
**	char *s -> the array of characters you want to write
**	int fd -> the file descriptor you want to write your string
**
**	==========================================================================
**	
**	This function will write a string in the file descriptor you want
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
