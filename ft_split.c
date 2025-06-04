/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:51:57 by kkeskin           #+#    #+#             */
/*   Updated: 2025/06/04 20:43:10 by kkeskin          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_mallocandcpy(char const *s, char c, size_t lastInit, size_t i)
{
	char	*arr;
	size_t	k;

	k = 0;
	arr = (char *)malloc((i - lastInit) + 1);
	if (!arr)
		return (NULL);
	while (lastInit < i)
	{
		arr[k] = s[lastInit];
		k++;
		lastInit++;
	}
	arr[k] = '\0';
	return (arr);
}

static void	ft_splitwords(char const *s, char c, char **split)
{
	size_t	i;
	size_t	split_index;
	size_t	last_init;

	i = 0;
	last_init = 0;
	split_index = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			split[split_index] = ft_mallocandcpy(s, c, last_init, i);
			split_index++;
			last_init = i + 1;
		}
		i++;
	}
	split[split_index++] = ft_mallocandcpy(s, c, last_init, i);
	split[split_index] = NULL;
}

static int	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	if (s[0] == '\0')
		return (0);
	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	ft_splitwords(s, c, split);
	return (split);
}
