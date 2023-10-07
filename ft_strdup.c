/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puiucorina <puiucorina@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:18:27 by puiucorina        #+#    #+#             */
/*   Updated: 2023/08/03 18:58:07 by puiucorina       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	s1_size;

	s1_size = ft_strlen(s1) + 1;
	dup = (char *)malloc(sizeof(*dup) * s1_size);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s1, s1_size);
	return (dup);
}
