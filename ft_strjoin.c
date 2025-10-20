/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oatiya <oatiya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:02:43 by oatiya            #+#    #+#             */
/*   Updated: 2025/10/20 14:02:44 by oatiya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	total_len;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	s3 = ft_calloc(total_len + 1, sizeof(char));
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, total_len + 1);
	ft_strlcat(s3, s2, total_len + 1);
	return (s3);
}
