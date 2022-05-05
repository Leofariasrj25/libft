/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfarias- <leofariasrj25@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:43:15 by lfarias-          #+#    #+#             */
/*   Updated: 2022/05/04 14:18:34 by lfarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_temp;
	char	*src_temp;
	size_t	i;

	dst_temp = (char *) dst;
	src_temp = (char *) src;
	if (src_temp == dst_temp || len == 0)
		return (dst);
	i = -1;
	if (dst_temp > src_temp && (dst_temp - src_temp < (int) len))
	{
		i = len;
		while (--i >= 0)
			dst_temp[i] = src_temp[i];
		return (dst_temp);
	}
	if (src_temp > dst_temp && (dst_temp - src_temp < (int) len))
	{
		while (++i < len)
			dst_temp[i] = src_temp[i];
		return (dst_temp);
	}
	ft_memcpy(dst, src, len);
	return (dst);
}
