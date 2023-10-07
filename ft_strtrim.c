/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puiucorina <puiucorina@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 19:19:34 by puiucorina        #+#    #+#             */
/*   Updated: 2023/08/03 21:02:27 by puiucorina       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkchar(char const *set, char const c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*trim_str;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_checkchar(set, s1[i]))
		i++;
	while (j > i && ft_checkchar(set, s1[j - 1]))
		j--;
	trim_str = (char *)malloc(sizeof(*s1) * (j - i) + 1);
	if (!trim_str)
		return (NULL);
	k = 0;
	while (i < j)
	{
		trim_str[k++] = s1[i++];
	}
	trim_str[k] = '\0';
	return (trim_str);
}
