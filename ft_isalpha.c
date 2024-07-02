/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:45:09 by makanji           #+#    #+#             */
/*   Updated: 2024/06/24 12:29:12 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//this will create an binary integer for indication
int	ft_isalpha(int c)
{
	if ((c <= 'Z' && c >= 'A') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
