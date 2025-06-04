/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@student.42istanbul.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 18:51:57 by kkeskin           #+#    #+#             */
/*   Updated: 2025/06/04 21:43:48 by kkeskin          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_mallocandcpy(char const *s, size_t start, size_t end)
{
	char	*arr;
	size_t	k;

	arr = (char *)malloc((end - start) + 1);
	if (!arr)
		return (NULL);
	k = 0;
	while (start < end)
		arr[k++] = s[start++];
	arr[k] = '\0';
	return (arr);
}

static void	free_split(char **split, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(split[i++]);
	free(split);
}

static int	ft_splitwords(char const *s, char c, char **split)
{
	size_t	i;
	size_t	start;
	size_t	split_arr_index;

	i = 0;
	start = 0;
	split_arr_index = 0;
	while (1)
	{
		if (s[i] == c || s[i] == '\0')
		{
			split[split_arr_index] = ft_mallocandcpy(s, start, i);
			if (!split[split_arr_index])
				return (free_split(split, split_arr_index), 0);
			split_arr_index++;
			start = i + 1;
		}
		if (s[i] == '\0')
			break ;
		i++;
	}
	split[split_arr_index] = NULL;
	return (1);
}

static int	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	if (!s || s[0] == '\0')
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
	if (!ft_splitwords(s, c, split))
		return (NULL);
	return (split);
}

#include <stdio.h>

int	main(void)
{
	char	arr[] = "Hello world i die.";
	size_t	i = 0;

	char	**split = ft_split(arr, ' ');

	while (split[i])
		printf("%s\n", split[i++]);
	return (0);
}
