/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfarias- <leofariasrj25@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:36:21 by lfarias-          #+#    #+#             */
/*   Updated: 2022/05/09 12:20:34 by lfarias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	l_trim;
	size_t	r_trim;
	char	*n_str;
	size_t	s1_size;
	size_t	set_size;

	s1_size = ft_strlen(s1);
	set_size = ft_strlen(set);
	if (ft_strnstr(s1, set, set_size))
		l_trim = set_size;
	else
		l_trim = 0;
	if (ft_strnstr(&s1[s1_size - set_size], set, set_size))
		r_trim = s1_size - set_size;
	else
		r_trim = s1_size;
	n_str = calloc((r_trim - l_trim) + 1, sizeof(char));
	if (!n_str)
		return (NULL);
	ft_strlcpy(n_str, &s1[(int) l_trim], (r_trim - l_trim) + 1);
	return (n_str);
}
