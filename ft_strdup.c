/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 21:27:13 by makanji           #+#    #+#             */
/*   Updated: 2024/06/17 21:51:56 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*rtn;
	size_t	len;

	len = ft_strlen(s1) + 1;
	rtn = malloc(sizeof(char) * len);
	if (!rtn)
		return (0);
	rtn = ft_memcpy(rtn, s1, len);
	return (rtn);
}
