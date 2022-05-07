/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfarias- <leofariasrj25@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:29:48 by lfarias-          #+#    #+#             */
/*   Updated: 2022/05/07 13:56:20 by lfarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *) haystack);
	while (i < len)
	{
		if (ft_strncmp(&haystack[i], needle, needle_len - 1) == 0)
		{
			return ((char *) &haystack[i]);
		}
		i++;
	}
	return (NULL);
}
