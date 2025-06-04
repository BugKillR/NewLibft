/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:54:49 by kkeskin           #+#    #+#             */
/*   Updated: 2025/06/02 18:50:26 by kkeskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	s1_len;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	start = 0;
	end = s1_len;
	if (ft_strncmp(s1, set, ft_strlen(set)) == 0)
		start = ft_strlen(set);
	if (s1_len >= ft_strlen(set)
		&& ft_strncmp(s1 + s1_len - ft_strlen(set), set, ft_strlen(set)) == 0)
		end = s1_len - ft_strlen(set);
	trimmed = (char *)malloc(end - start + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, end - start + 1);
	return (trimmed);
}