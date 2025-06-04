/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 13:45:02 by kkeskin           #+#    #+#             */
/*   Updated: 2025/06/03 09:58:47 by kkeskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (i < n)
	{
		if (!c1[i] || !c2[i] || c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}
