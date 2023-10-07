/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puiucorina <puiucorina@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 23:41:35 by puiucorina        #+#    #+#             */
/*   Updated: 2023/08/02 23:55:59 by puiucorina       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n && *ptr != ch)
	{
		ptr++;
		n--;
	}
	if (n)
		return ((void *)ptr);
	else
		return (NULL); 
}
