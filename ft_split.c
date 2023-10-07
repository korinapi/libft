/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puiucorina <puiucorina@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:32:35 by puiucorina        #+#    #+#             */
/*   Updated: 2023/08/05 17:43:36 by puiucorina       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_array(char **new_str)
{
	int	i;

	i = 0;
	while (new_str[i])
	{
		free(new_str[i]);
		i++;
	}
	free(new_str);
}

void	ft_allocate(char **new_str, char const *s, char c)
{
	char		**new_str_p;
	char const	*temp;

	new_str_p = new_str;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		temp = s;
		while (*temp && *temp != c)
			temp++;
		if (temp > s)
		{
			*new_str_p = ft_substr(s, 0, temp - s);
			if (!*new_str_p)
			{
				ft_free_array(new_str);
				return ;
			}
			new_str_p++;
		}
		s = temp;
	}
	*new_str_p = 0;
}

int	ft_count(char const *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			words++;
		while (*s && *s != c)
			s++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**array_str;

	if (!s)
		return (NULL);
	array_str = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!array_str)
		return (NULL);
	ft_allocate(array_str, s, c);
	return (array_str);
}
