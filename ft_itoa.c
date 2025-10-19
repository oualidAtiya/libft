/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oatiya <oatiya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:54:41 by oatiya            #+#    #+#             */
/*   Updated: 2025/10/19 12:02:21 by oatiya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_intlen(long n)
{
	long	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		len = 1;
		n = n * -1;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	long	len;
	int		is_neg;

	num = (long)n;
	len = ft_intlen(num);
	is_neg = 0;
	if (num < 0)
	{
		is_neg = 1;
		num = num * -1;
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len-- > 0)
	{
		str[len - 1] = (num % 10) + 48;
		num = num / 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}
