/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:28 by daykim            #+#    #+#             */
/*   Updated: 2022/01/18 18:10:28 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_word_cnt(char *, char);

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		cnt_str;
	int		index;
	int		len;

	cnt_str = get_word_cnt(s, c);
	str = (char **)malloc(sizeof(char *) * (cnt_str + 1));
	index = 0;
	while (s[index])
	{
		len = 0;
		while (s[index] == c)
			index++;
		len = index;
		while (s[index] != c)
			index++;
		if (len < index)
		{
			
		}
	}
}

int	get_word_cnt(char *str, char c)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		while (*str != c)
			str++;
		cnt++;
	}
	return (cnt);
}