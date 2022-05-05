/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfarias- <leofariasrj25@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:12:23 by lfarias-          #+#    #+#             */
/*   Updated: 2022/05/05 12:56:50 by lfarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// o código assume que as duas strings possuem o mesmo tamanho n
// the function should return 0 if they are equal or are of size 0
// first the basic functioning then edge cases

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while (i < n && p1[i] == p2[i])
	{
		i++;
	}
	return ((unsigned char) p1[i] - (unsigned char) p2[i]);
}
