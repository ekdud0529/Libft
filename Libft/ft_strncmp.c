/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:02:27 by daykim            #+#    #+#             */
/*   Updated: 2022/01/26 20:04:10 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	index;

	if (n == 0)
		return (0);
	index = 0;
	while (*(str1 + index) && *(str2 + index) && n--)
	{
		if (*(str1 + index) != *(str2 + index))
			return (*(str1 + index) - *(str2 + index));
	}
	return (0);
}
