/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanzilo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 18:54:37 by dlanzilo          #+#    #+#             */
/*   Updated: 2021/01/16 18:52:30 by dlanzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*newstr;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	if (*s)
	{
		if (!(newstr = malloc(sizeof(char) * (len + 1))))
			return (NULL);
		while (i < len)
		{
			newstr[i] = s[start];
			i++;
			start++;
		}
		newstr[i] = '\0';
		return (newstr);
	}
	return (NULL);
}
