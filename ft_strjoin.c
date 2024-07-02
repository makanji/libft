/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:39:30 by makanji           #+#    #+#             */
/*   Updated: 2024/07/02 14:54:25 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*handle_null_cases(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	return (NULL);
}

static size_t	ft_strlen_const(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

static void	ft_strcpy(char *dst, const char *src, size_t len)
{
	while (len--)
		*dst++ = *src++;
}

static char	*ft_strcat_new(char const *s1, char const *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen_const(s1);
	len2 = ft_strlen_const(s2);
	result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!result)
		return (NULL);
	ft_strcpy(result, s1, len1);
	ft_strcpy(result + len1, s2, len2 + 1);
	return (result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (handle_null_cases(s1, s2));
	return (ft_strcat_new(s1, s2));
}
