/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:27:47 by kkeskin           #+#    #+#             */
/*   Updated: 2025/06/03 10:03:27 by kkeskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	size_t	i;
	size_t	k;
	size_t	len2;

	b = (char *)big;
	l = (char *)little;
	i = 0;
	len2 = ft_strlen(l);
	if (!little)
		return (b);
	while (i < len)
	{
		k = 0;
		while (b[i + k] == l[k])
			k++;
		if (k == len2)
			return (&b[i]);
		i++;
	}
	return (NULL);
}
