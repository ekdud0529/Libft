/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:23:32 by daykim            #+#    #+#             */
/*   Updated: 2022/01/12 16:23:32 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t			dest_len;
	size_t			src_len;
	unsigned char	*s;

	s = src;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	while (*dest)
		dest++;
	if (n <= dest_len)
		return (n + src_len);
	n -= (dest_len + 1);
	while (n--)
	{
		*dest = *s;
		dest++;
		s++;
	}
	*dest = '\0';
	return (dest_len + src_len);
}