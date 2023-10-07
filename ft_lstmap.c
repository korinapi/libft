/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puiucorina <puiucorina@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:01:31 by puiucorina        #+#    #+#             */
/*   Updated: 2023/09/30 18:26:38 by puiucorina       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_list;
// 	t_list	*start;

// 	if (!f || !del)
// 		return (NULL);
// 	start = NULL;
// 	while (lst)
// 	{
// 		new_list = ft_lstnew((*f)(lst->content));
// 		if (!(new_list))
// 		{
// 			// new_list = start->next;
// 			// ft_lstdelone(lst, del);
// 			// start = new_list;
// 			// lst = NULL;
// 			// return (NULL);
// 			ft_lstclear(&start, del);
//             return (NULL);
// 		}
// 		ft_lstadd_back(&start, new_list);
// 		lst = lst->next;
// 	}
// 	return (start);
// }

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    //t_list *new_list = NULL;
    t_list *start = NULL;

    if (!f || !del)
        return (NULL);

    while (lst)
    {
        t_list *new_node = ft_lstnew((*f)(lst->content));
        if (!new_node)
        {
            ft_lstclear(&start, del);
            return (NULL);
        }
        ft_lstadd_back(&start, new_node);
        lst = lst->next;
    }

    return (start);
}

