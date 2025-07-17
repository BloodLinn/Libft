/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokur <aokur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:49:16 by aokur             #+#    #+#             */
/*   Updated: 2025/07/07 17:26:44 by aokur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*b;
	size_t	i;
	size_t	c;

	i = ft_strlen (s1);
	b = malloc((i + 1) * sizeof(char));
	c = 0;
	if (!b)
		return (NULL);
	while (s1[c])
	{
		b[c] = s1[c];
		c++;
	}
	b[c] = '\0';
	return (b);
}
