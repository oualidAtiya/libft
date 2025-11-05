/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oatiya <oatiya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:52:57 by oatiya            #+#    #+#             */
/*   Updated: 2025/10/28 12:30:45 by oatiya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	byte;
	unsigned char	*start;
	size_t			i;

	i = 0;
	byte = (unsigned char)c;
	start = (unsigned char *)s;
	while (i < n)
	{
		if (start[i] == byte)
			return (&start[i]);
		i++;
	}
	return (NULL);
}
