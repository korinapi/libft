/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puiucorina <puiucorina@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:52:51 by puiucorina        #+#    #+#             */
/*   Updated: 2023/08/03 11:48:58 by puiucorina       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*s_rev;

	s_rev = (char *)s + ft_strlen(s);
	ch = (char)c;
	if (ch == '\0')
		return (s_rev);
	while (s_rev >= s)
	{
		if (*s_rev == ch)
			return ((char *)s_rev);
		s_rev--;
	}
	return (NULL);
}
