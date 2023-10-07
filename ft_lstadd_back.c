/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puiucorina <puiucorina@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:40:06 by puiucorina        #+#    #+#             */
/*   Updated: 2023/08/05 13:03:34 by puiucorina       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lstl;

	if (lst)
	{
		if (*lst)
		{
			lstl = ft_lstlast(*lst);
			lstl->next = new;
		}
		else
			*lst = new;
	}
}
