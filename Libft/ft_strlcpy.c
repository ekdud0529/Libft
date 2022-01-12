/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:15:55 by daykim            #+#    #+#             */
/*   Updated: 2022/01/12 16:15:55 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dest, const char *src, size_t size)
{
	unsigned char	*s;
	size_t			cnt;

	cnt = 0;
	s = src;
	while (*src)
	{
		cnt++;
		src++;
	}
	while (--size)
	{
		*dest = *s;
		s++;
		dest++;
	}
	*dest = '\0';
	return (cnt);
}