/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotillion <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:13:35 by tpotillion        #+#    #+#             */
/*   Updated: 2022/10/14 14:26:23 by tpotillion       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <ctype.h>

size_t strlen(const char *s)
char *ft_strnstr(const char *big, const char *little, size_t len)
void ft_srlcpy(char *dest, const char *src, size_t size)
void *memset(void *s,int c, size_t n)
int ft_isdigit(int c)
int ft_isascii(int c)
int is_alpha(int c)
int ft_isisnalnum(int c)
void bzero(void *s, size_t n)
int ft_atoi(const char *nptr)


#endif