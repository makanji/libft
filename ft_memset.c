/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:00:17 by makanji           #+#    #+#             */
/*   Updated: 2024/06/24 13:08:09 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	uc;

	ptr = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
	{
		*ptr++ = uc;
	}
	return (s);
}

/*
int main() {
	char buffer[20]; // Create a buffer of 20 bytes
	size_t size = sizeof(buffer); // Determine the size of the buffer

	// Print the initial contents of the buffer
	printf("Buffer before ft_memset:\n");
	for (size_t i = 0; i < size; i++) {
		printf("%c ", buffer[i]); // Print each character in the buffer
	}
	printf("\n");

	// Use ft_memset to fill the buffer with 'X' (ASCII value 88)
	ft_memset(buffer, 'X', size);

	// Print the contents of the buffer after calling ft_memset
	printf("Buffer after ft_memset:\n");
	for (size_t i = 0; i < size; i++) {
		printf("%c ", buffer[i]); // Print each character in the buffer
	}
	printf("\n");

	return 0;
}

*/