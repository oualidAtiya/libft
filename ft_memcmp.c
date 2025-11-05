/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oatiya <oatiya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:53:37 by oatiya            #+#    #+#             */
/*   Updated: 2025/10/29 10:26:30 by oatiya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_start;
	const unsigned char	*s2_start;
	size_t				i;

	if (!s1 || !s2)
		return (0);
	s1_start = s1;
	s2_start = s2;
	i = 0;
	while (i < n)
	{
		if (*s1_start != *s2_start)
			return (*s1_start - *s2_start);
		s1_start++;
		s2_start++;
		i++;
	}
	return (0);
}
