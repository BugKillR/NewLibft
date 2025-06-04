/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:13:25 by kkeskin           #+#    #+#             */
/*   Updated: 2025/06/02 10:37:57 by kkeskin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cpy(char *newstr, char const *s, size_t *i)
{
	size_t	k;

	k = 0;
	while (s[k])
	{
		newstr[*i] = s[k];
		(*i)++;
		k++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t		i;

	if (!s1 || !s2)
		return (NULL);
	newstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	ft_cpy(newstr, s1, &i);
	ft_cpy(newstr, s2, &i);
	newstr[i] = '\0';
	return (newstr);
}
