/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 02:51:57 by kkeskin           #+#    #+#             */
/*   Updated: 2025/05/25 02:51:58 by kkeskin          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	char	*num;
	int		i;
	int		sign;
	int		res;

	i = 0;
	sign = 1;
	res = 0;
	num = (char *)nptr;
	while (num[i] == ' ' || (9 <= num[i] && num[i] <= 13))
		i++;
	if (num[i] == '-' || num[i] == '+')
	{
		if (num[i] == '-')
			sign *= -1;
		i++;
	}
	while ('0' <= num[i] && num[i] <= '9')
	{
		res = (res * 10) + (num[i] - '0');
		i++;
	}
	return (res * sign);
}
