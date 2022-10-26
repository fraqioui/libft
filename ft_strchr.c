/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:38:56 by fraqioui          #+#    #+#             */
/*   Updated: 2022/10/19 09:41:27 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	first;
	char	*str;

	i = ft_strlen(s);
	first = 0;
	str = (char *)s;
	while (first <= i)
	{
		if (str[first] == (char)c)
			return (&str[first]);
		first++;
	}
	return (0);
}
