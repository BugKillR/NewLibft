/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 02:21:44 by kkeskin           #+#    #+#             */
/*   Updated: 2025/05/25 02:48:50 by kkeskin          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getcharlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n == (-2147483647 - 1))
		return (11);
	else if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	ft_convert(int *i, int n, char *str)
{
	if (n >= 10)
		ft_convert(i, n / 10, str);
	str[*i] = (n % 10) + '0';
	(*i)++;
}

static char	*ft_handle_int_min(char *str)
{
	ft_strcpy(str, "-2147483648");
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_getcharlen(n) + 1));
	if (!str)
		return (NULL);
	str[ft_getcharlen(n)] = '\0';
	if (n == (-2147483647 - 1))
		return (ft_handle_int_min(str));
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		i = 1;
		n *= -1;
	}
	ft_convert(&i, n, str);
	return (str);
}