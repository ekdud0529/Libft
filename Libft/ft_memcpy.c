/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:21:58 by daykim            #+#    #+#             */
/*   Updated: 2021/12/23 16:21:58 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	index;

	index = 0;
	while (index < n)
	{
		*((unsigned char *)dest + index) = (unsigned char *)src;
		index++;
		src++;
	}
	return (dest);
}