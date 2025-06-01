/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 22:31:09 by kkeskin           #+#    #+#             */
/*   Updated: 2025/05/27 20:39:04 by kkeskin          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*convert;

	i = 0;
	convert = (unsigned char *)s;
	while (i < n)
	{
		convert[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
