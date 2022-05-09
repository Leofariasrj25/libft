/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfarias- <leofariasrj25@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:39:04 by lfarias-          #+#    #+#             */
/*   Updated: 2022/05/09 18:31:09 by lfarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sep_counter(char *str, char c)
{
	int	sep_count;

	sep_count = 0;
	while (*str != '\0')
	{
		if (*str == c)
			sep_count++;
		str++;
	}
	return (sep_count);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**strs;
	char	*sub_str;
	size_t	i;
	size_t	str_len;

	strs = ft_calloc(sep_counter((char *) s, c) + 2, sizeof(char));
	str = (char *) s;
	str_len = 0;
	i = 0;
	while (*str != '\0')
	{
		if (*str == c)
		{
			sub_str = str + 1;
			while (*sub_str != c && *sub_str != '\0')
				sub_str++;
			strs[i] = calloc(sub_str - str + 1, sizeof(char));
			ft_strlcpy(strs[i++], str + 1, sub_str - str);
			str = sub_str;
		}
		else
			str++;
	}
	return (strs);
}
