/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:35:33 by daykim            #+#    #+#             */
/*   Updated: 2022/01/15 19:35:33 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	int		sub_len;
	int		index;
	char	*s;
	char	*sub;

	index = -1;
	sub_len = strlen(str);
	if (n == 0 || sub_len == 0)
		return (str);
	while (++index <= n - sub_len)
	{
		sub = substr;
		s = str + index;
		while(*sub && *s)
		{
			if(*sub != *s)
				break ;
			s++;
			sub++;
		}
		if (*sub == '\0')
			return (str + index);
	}
	return (0);
}