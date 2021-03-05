/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanzilo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 19:08:49 by dlanzilo          #+#    #+#             */
/*   Updated: 2021/01/14 19:09:40 by dlanzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t num)
{
	size_t	i;

	i = 0;
	if (num == 0)
		return (dest);
	while (num--)
	{
		if (!(*src))
			dest[i] = '\0';
		else
		{
			dest[i] = *src;
			src++;
		}
		i++;
	}
	return (dest);
}
