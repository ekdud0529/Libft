/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:56:28 by daykim            #+#    #+#             */
/*   Updated: 2022/01/12 15:56:28 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char* str)
{
	char*	s;
	size_t	cnt;

	cnt = 0;
	s = str;
	while (s)
	{
		cnt++;
		s++;
	}
	return (cnt);
}