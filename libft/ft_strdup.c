/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanzilo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 18:32:05 by dlanzilo          #+#    #+#             */
/*   Updated: 2021/01/14 18:03:14 by dlanzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*newarr;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	if (!(newarr = malloc(sizeof(char) * (len + 1))))
	{
		return (NULL);
	}
	while (s1[i])
	{
		newarr[i] = s1[i];
		i++;
	}
	newarr[i] = s1[i];
	return (newarr);
}
