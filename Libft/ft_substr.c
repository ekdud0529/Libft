/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:53:29 by daykim            #+#    #+#             */
/*   Updated: 2022/01/23 15:17:14 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	max_len;
	int		i;

	if (!s)
		return (0);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	s_len = ft_strlen(s);
	max_len = len + start;
	i = 0;
	while ((start < s_len) && (start < max_len))
	{
		substr[i++] = *(s + start);
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
