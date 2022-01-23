/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:18:34 by daykim            #+#    #+#             */
/*   Updated: 2022/01/23 15:16:49 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		back;
	char	*newstr;

	if (!s1 || !set)
		return (0);
	front = 0;
	while (s1[front] && ft_strchr(set, s1[front]))
		front++;
	back = ft_strlen(s1) - 1;
	while (s1[back] && ft_strchr(set, s1[back]))
		back--;
	newstr = (char *)malloc(sizeof(char) * (back - front + 2));
	if (!newstr)
		return (0);
	ft_strlcpy(newstr, &s1[front], back - front + 1);
	return (newstr);
}
