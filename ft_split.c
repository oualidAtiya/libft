/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oatiya <oatiya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:17:49 by oatiya            #+#    #+#             */
/*   Updated: 2025/10/22 09:04:45 by oatiya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	word_len(char *str, int start, char c)
{
	int	len;

	if (!str)
		return (0);
	len = 0;
	while (str[start] && str[start] != c)
	{
		len++;
		start++;
	}
	return (len);
}

static void	ft_free(char **arr, int index)
{
	while (index >= 0)
	{
		free(arr[index]);
		index--;
	}
	free(arr);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	char	**array;

	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	array = malloc((count_word(str, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && word_len((char *)str, i, c))
		{
			array[j++] = ft_substr(str, i, word_len((char *)str, i, c));
			if (!array[j - 1])
				return (ft_free(array, j - 1), NULL);
			i += word_len((char *)str, i, c);
		}
	}
	return (array[j] = NULL, array);
}