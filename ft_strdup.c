/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 05:59:25 by kkeskin           #+#    #+#             */
/*   Updated: 2025/06/03 08:42:44 by kkeskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;

	p = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!p)
		return (NULL);
	ft_memcpy(p, s, ft_strlen(s));
	p[ft_strlen(s)] = '\0';
	return (p);
}
