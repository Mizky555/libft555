/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:14:28 by tsirirak          #+#    #+#             */
/*   Updated: 2022/03/12 21:05:59 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	while (len > 0)
	{
		--len;
		((char *)b)[len] = c;
	}
	return (b);
}