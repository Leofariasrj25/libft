/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfarias- <leofariasrj25@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:40:58 by lfarias-          #+#    #+#             */
/*   Updated: 2022/05/15 20:08:05 by lfarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	n;
	size_t	i;

	n = dstsize;
	i = 0;
	while (n != 0 && dst[i] != '\0')
	{
		i++;
		n--;
	}
	dstlen = i;
	if (n == 0)
		return (dstlen + ft_strlen(src));
	i = -1;
	while (src[++i] != '\0')
	{
		if (n > 1)
		{
			dst[dstlen + i] = src[i];
			n--;
		}
	}
	dst[dstlen + i] = '\0';
	return (dstlen + i);
}

/*int main(void)
{
	
	char s1[4] = "";
	char s2[4] = "";
	int r1;
	int r2;
	r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
	r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
	
	printf("%d -> %s\n", r1, s1);
	printf("%d -> %s\n", r2, s2);

	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[3840] = "there is no stars in the sky";
	char buff2[3840] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	printf("max %lu\n", max);
	r1 = strlcat(buff1, str, max);
	r2 = ft_strlcat(buff2, str, max);

	printf("r1 %d -> %s\n", r1, buff1);
	printf("r2 %d -> %s\n", r2, buff2);
}*/
