/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:43:16 by kkeskin           #+#    #+#             */
/*   Updated: 2025/06/03 09:34:48 by kkeskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t		s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, &s[start], len);
	substr[len] = '\0';
	return (substr);
}
