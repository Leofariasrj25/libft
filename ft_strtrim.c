/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfarias- <leofariasrj25@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:36:21 by lfarias-          #+#    #+#             */
/*   Updated: 2022/05/12 18:02:19 by lfarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	end;

	i = -1;
	start = 0;
	end = ft_strlen(s1);
	while (set[++i] != '\0')
	{
		if (ft_strchr(&s1[start], set[i]))
			start++;
		else
			break ;
	}
	i = -1;
	while (set[++i] != '\0')
	{
		if (ft_strrchr(&s1[end], set[i]))
			end--;
		else
			break ;
	}
	return (ft_substr(s1, start, end - start));
}
