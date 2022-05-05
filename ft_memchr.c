/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfarias- <leofariasrj25@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:47:36 by lfarias-          #+#    #+#             */
/*   Updated: 2022/05/05 12:09:48 by lfarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	find;
	size_t			i;

	find = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == find)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
