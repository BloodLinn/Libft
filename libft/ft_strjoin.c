/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:33:16 by aokur             #+#    #+#             */
/*   Updated: 2025/07/07 17:40:46 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l;
	size_t	b;
	char	*tmp;

	l = 0;
	b = 0;
	if (!s1 || !s2)
		return (NULL);
	tmp = malloc(((ft_strlen(s1)) + ft_strlen(s2) + 1) * (sizeof(char)));
	if (!tmp)
		return (NULL);
	while (s1[l])
	{
		tmp[l] = s1[l];
		l++;
	}
	while (s2[b])
	{
		tmp[l + b] = s2[b];
		b++;
	}
	tmp[l + b] = '\0';
	return (tmp);
}
