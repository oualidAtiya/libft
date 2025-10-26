/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oatiya <oatiya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:29:51 by oatiya            #+#    #+#             */
/*   Updated: 2025/10/26 15:42:05 by oatiya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;
	size_t			total;

	if (count != 0 && size > (size_t)-1 / count)
		return (NULL);
	total = size * count;
	tmp = malloc(total);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < total)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
