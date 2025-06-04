/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:21:48 by kkeskin           #+#    #+#             */
/*   Updated: 2025/06/03 08:41:46 by kkeskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!src && !dest)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (s == d)
		return (dest);
	else if (s < d)
	{
		while (n)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
		return (ft_memcpy(dest, src, n));
	return (dest);
}
