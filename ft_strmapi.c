/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makanji <makanji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:15:45 by makanji           #+#    #+#             */
/*   Updated: 2024/06/21 13:50:33 by makanji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*rtn;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	else if (!f)
		return (ft_strdup(s));
	rtn = ft_strdup(s);
	if (!rtn)
		return (NULL);
	while (s[i] != '\0')
	{
		rtn[i] = f(i, s[i]);
		i++;
	}
	return (rtn);
}
