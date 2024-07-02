/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:40:10 by makanji           #+#    #+#             */
/*   Updated: 2024/06/24 13:19:36 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

/*
void	ft_bzero(void *s, size_t n)
{
	unsigned char *ptr;
	
	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}
*/