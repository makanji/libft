/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:29:39 by makanji           #+#    #+#             */
/*   Updated: 2024/07/02 15:03:24 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_const(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

static char	*ft_strdup_substr(const char *s, size_t start, size_t len)
{
	char	*result;
	size_t	i;

	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen_const(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (s_len - start < len)
		len = s_len - start;
	return (ft_strdup_substr(s, start, len));
}
