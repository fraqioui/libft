/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:19:05 by fraqioui          #+#    #+#             */
/*   Updated: 2022/10/20 09:23:01 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static char	*ft_checksign(const char *s, int *c)
{
	if (*s == '+')
		s++;
	else if (*s == '-')
	{
		*c = -1;
		s++;
	}
	return ((char *)s);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long long	res;
	long long	prev;
	char		*s;

	sign = 1;
	res = 0;
	while (*str != '\0' && (*str == ' ' || *str == '\n' || *str == '\t'
			||*str == '\f' || *str == '\r' || *str == '\v'))
		str++;
	s = ft_checksign(str, &sign);
	while (*s >= '0' && *s <= '9')
	{
		prev = res;
		res = res * 10 + (*s - 48);
		if (prev != res / 10 && sign == 1)
			return (-1);
		else if (prev != res / 10 && sign == -1)
			return (0);
		s++;
	}
	return (sign * res);
}
