/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 21:09:33 by makanji           #+#    #+#             */
/*   Updated: 2024/07/02 15:06:55 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	total_size;

	total_size = count * size;
	if (count != 0 && total_size / count != size)
		return (NULL);
	result = malloc(total_size);
	if (!result)
		return (NULL);
	ft_bzero(result, total_size);
	return (result);
}
