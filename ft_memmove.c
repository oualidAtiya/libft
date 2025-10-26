/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oatiya <oatiya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:54:56 by oatiya            #+#    #+#             */
/*   Updated: 2025/10/25 17:58:58 by oatiya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src_ptr;
	unsigned char	*dest_ptr;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	i = 0;
	if (src > dest)
	{
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (n > 0)
		{
			dest_ptr[n - 1] = src_ptr[n - 1];
			n--;
		}
	}
	return (dest);
}

int main()
{
	char str[] =  "hello world" ;
	printf("%s\n",(char*)memmove(str+2,str,4));
	printf("%s\n",(char*)ft_memmove(str+2,str,4));
}