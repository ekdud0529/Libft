/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:27:08 by daykim            #+#    #+#             */
/*   Updated: 2022/01/15 19:27:08 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int				index;
	unsigned char	*s;

	s = str;
	index = 0;
	while (index++ < n)
	{
		if(*s == c)
		{
			return ((void *)s);
		}
	}
	return (0);
}