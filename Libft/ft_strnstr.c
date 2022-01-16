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
	int		index;
	char	*s;
	char	*sub;

	index = 0;
	if (n == 0 || !ft_strlen(substr))
		return (str);
	while (*str && index < n)
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
		index++;
	}
	return (0);
}