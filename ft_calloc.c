/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 06:57:55 by fraqioui          #+#    #+#             */
/*   Updated: 2022/10/21 07:56:37 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;
	size_t	n;

	n = count * size;
	if (n != 0 && (n / count) != size)
		return (NULL);
	array = malloc(size * count);
	if (!array)
		return (NULL);
	ft_bzero(array, count * size);
	return (array);
}
