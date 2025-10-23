/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oatiya <oatiya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:06:38 by oatiya            #+#    #+#             */
/*   Updated: 2025/10/21 09:06:12 by oatiya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*big_ptr;
	char	*little_ptr;
	size_t	i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (*big && i < len)
	{
		big_ptr = (char *)big;
		little_ptr = (char *)little;
		while (*little_ptr && *big_ptr == *little_ptr)
		{
			big_ptr++;
			little_ptr++;
		}
		if (*little_ptr == '\0')
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}