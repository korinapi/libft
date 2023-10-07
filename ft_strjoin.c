/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puiucorina <puiucorina@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:01:00 by puiucorina        #+#    #+#             */
/*   Updated: 2023/08/03 18:58:16 by puiucorina       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	new_size;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_size = s1_len + s2_len + 1;
	new_str = (char *)malloc(new_size * sizeof(char));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, new_size);
	ft_strlcat(new_str, s2, new_size);
	return (new_str);
}
