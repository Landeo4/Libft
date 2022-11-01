/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotillion <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:35:13 by tpotillion        #+#    #+#             */
/*   Updated: 2022/10/27 15:36:58 by tpotillion       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i],1);
		i++;
	}
}