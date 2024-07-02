/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:57:24 by makanji           #+#    #+#             */
/*   Updated: 2024/06/24 18:48:08 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	total_length;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	while (src[src_len])
		src_len++;
	total_length = dst_len + src_len;
	if (size > dst_len)
	{
		while (src[i] && (dst_len + i + 1) < size)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (total_length);
}
