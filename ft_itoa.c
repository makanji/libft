/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:51:31 by makanji           #+#    #+#             */
/*   Updated: 2024/06/21 16:05:20 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned	int	ft_number_size(int number)
{
	unsigned int	length;

	length = 0;
	if (number == 0)
		length = 1;
	if (number < 0)
		length += 1;
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	unsigned int	length;
	unsigned int	number;
	char			*string;

	length = ft_number_size(n);
	string = (char *) malloc (sizeof(char) * (length + 1));
	if (!string)
		return (NULL);
	if (n < 0)
	{
		string[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		string[0] = '0';
	string[length] = '\0';
	while (number != 0)
	{
		string[length - 1] = (number % 10) + '0';
		number /= 10;
		length--;
	}
	return (string);
}
