/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:53:04 by fraqioui          #+#    #+#             */
/*   Updated: 2022/10/20 11:29:57 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	neelen;
	size_t	i;

	neelen = ft_strlen(needle);
	i = 0;
	if (!haystack && !len)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == *needle && len - i >= neelen
			&& ft_strncmp(&haystack[i], &needle[0], neelen) == 0)
			return ((char *)(&haystack[i]));
		i++;
	}
	return (0);
}
