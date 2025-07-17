/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:49:46 by aokur             #+#    #+#             */
/*   Updated: 2025/07/06 22:12:08 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			x++;
		while (s[i] != c && s[i])
			i++;
	}
	return (x);
}

static void	free_split(char **result, int t)
{
	while (t >= 0)
	{
		free(result[t]);
		t--;
	}
	free(result);
}

static char	**word_array(char const *s, char c, char **result)
{
	size_t	i;
	size_t	t;
	size_t	start;

	i = 0;
	t = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		result[t] = ft_substr(s, start, i - start);
		if (!result[t])
		{
			free_split(result, t);
			return (NULL);
		}
		t++;
	}
	result[t] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	result = word_array(s, c, result);
	return (result);
}
