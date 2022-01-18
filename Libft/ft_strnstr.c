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
	int	index;
	int	start;
	int	sub_len;

	if(!*substr)
		return (str);
	index = 0;
	sub_len = ft_strlen(substr);
	while (index < n - sub_len)
	{
		start = index;
		while (str[start] && substr[start])
		{
			if(str[start] != substr[start])
				break;
			start++;
		}
		if(!substr[start])
			return (str + index);
		index++;
	}
	return (0);
}