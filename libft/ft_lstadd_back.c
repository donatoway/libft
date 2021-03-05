/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanzilo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 17:10:46 by dlanzilo          #+#    #+#             */
/*   Updated: 2021/01/15 17:35:08 by dlanzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*elem;

	if (alst != NULL && *alst != NULL)
	{
		elem = *alst;
		elem = ft_lstlast(*alst);
		elem->next = new;
		return ;
	}
	*alst = new;
}
