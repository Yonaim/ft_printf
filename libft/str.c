/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhkim <yeonhkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:17:04 by yona              #+#    #+#             */
/*   Updated: 2022/09/12 12:39:22 by yeonhkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft_internal.h"

size_t	ft_strlen(const char *str)
{
	const char	*ptr;

	ptr = str;
	while (*ptr)
		ptr++;
	return (ptr - str);
}

int	ft_strchr(const char *str, char c)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if (str[idx] == c)
			return (idx);
		idx++;
	}
	return (-1);
}

void	ft_str_toupper(char *str, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] += ('A' - 'a');
		i++;
	}
}

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	srcsize;
	int		i;

	srcsize = 0;
	while (s1[srcsize])
		srcsize++;
	dst = malloc(srcsize + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (*s1)
		dst[i++] = *s1++;
	dst[i] = '\0';
	return (dst);
}
