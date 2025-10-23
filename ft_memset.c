/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oatiya <oatiya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:57:19 by oatiya            #+#    #+#             */
/*   Updated: 2025/10/21 11:38:35 by oatiya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t size)
{
	unsigned char	*ch;
	size_t			i;

	ch = (unsigned char *)s;
	i = 0;
	while (i < size)
	{
		*ch = c;
		ch++;
		i++;
	}
	return (s);
}

int main()
{
		int n = 56225632;
		int p = 255;
		int a = 199;
		int b = 250;
		ft_memset(&n, 255,4);
		ft_memset(&n, 255,3);
		ft_memset(&n, 250,2);
		ft_memset(&n, 199,1);
		printf("%d\n", n);
}
