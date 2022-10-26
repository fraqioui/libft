/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 07:22:36 by fraqioui          #+#    #+#             */
/*   Updated: 2022/10/18 17:07:06 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*arr;
	size_t	n;
	int		i;

	n = ft_strlen(s);
	i = 0;
	arr = malloc(sizeof(char) * (n + 1));
	if (!arr)
		return (NULL);
	while (n--)
	{
		arr[i] = s[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
