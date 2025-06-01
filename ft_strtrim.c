/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:18:01 by kkeskin           #+#    #+#             */
/*   Updated: 2025/06/02 00:24:02 by kkeskin          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_getstart(char const *s1, char *start, char const *set)
{
	size_t		i;
	size_t		k;

	i = 0;
        while(s1[i] && !start)
        {
                k = 0;
                while (s1[i + k] == set[k])
                {
                        if (k == ft_strlen(set) - 1)
                                start = &s1[i + k];
                        k++;
                }
                i++;
        }
	
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	char	*start;
	char	*end;

	ft_getstart(s1, start, set);
}
