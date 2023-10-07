/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puiucorina <puiucorina@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 23:57:58 by puiucorina        #+#    #+#             */
/*   Updated: 2023/08/03 00:16:01 by puiucorina       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s; 
	unsigned char	*d;

	s = (unsigned char *)s2;
	d = (unsigned char *)s1;
	while (n && *d == *s)
	{
		d++;
		s++;
		n--;
	}
	if (n)
		return (*d - *s);
	return (0);
}
