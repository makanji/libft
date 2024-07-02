/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:59:51 by makanji           #+#    #+#             */
/*   Updated: 2024/07/02 14:58:29 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlen( const char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}
