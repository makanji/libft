/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:12:33 by makanji           #+#    #+#             */
/*   Updated: 2024/06/20 13:44:30 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char		*trimmed;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && ft_strchr (set, s1[start]))
		++start;
	while (s1[start] && ft_strchr (set, s1[end]))
		--end;
	trimmed = ft_substr(s1, start, end - start + 1);
	return (trimmed);
}
