/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puiucorina <puiucorina@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 00:16:25 by puiucorina        #+#    #+#             */
/*   Updated: 2023/08/03 11:47:51 by puiucorina       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = ft_strlen(needle);
	while (*haystack && i <= len)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, i) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
