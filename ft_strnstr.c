/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oatiya <oatiya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:06:38 by oatiya            #+#    #+#             */
/*   Updated: 2025/10/26 10:35:24 by oatiya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i ;
	size_t	j ;
	size_t k ;

	
	j = 0 ;
	i = 0 ;
	if (little[j] == '\0')
		return ((char *)&big[i]);
	while (big[i] && i < len)
	{
		k = i;
		j = 0 ;
		while (little[j] && i < len && big[i] == little[j])
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[k]);
		i = k ;
		i++;
	}
	return (NULL);
}
