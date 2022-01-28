/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:10:28 by daykim            #+#    #+#             */
/*   Updated: 2022/01/25 19:00:39 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_word_cnt(char *str, char c);
char	*mk_str(int start, int end, char *str);
void	str_free(char **str, int index);
void	mk_word(char **str, char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	cnt_str;

	cnt_str = get_word_cnt((char *)s, c);
	str = (char **)malloc(sizeof(char *) * (cnt_str + 1));
	if (!str)
		return (0);
	mk_word(str, (char *)s, c);
	return (str);
}

void	mk_word(char **str, char *s, char c)
{
	size_t	end;
	size_t	i;
	size_t	start;

	end = 0;
	i = 0;
	while (s[end])
	{
		while (s[end] && (s[end] == c))
			end++;
		start = end;
		while (s[end] && (s[end] != c))
			end++;
		if (start < end)
			str[i] = mk_str(start, end, (char *)s);
		if (!str[i])
		{
			str_free(str, i);
			return ;
		}
		i++;
	}
	str[i] = 0;
}

void	str_free(char **str, int index)
{
	while (index--)
	{
		free(str[index]);
		str[index] = 0;
	}
	free(str);
	str = 0;
}

char	*mk_str(int start, int end, char *str)
{
	char	*s;
	int		i;

	s = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!s)
		return (0);
	i = 0;	
	while (start < end)
	{
		s[i] = str[start];
		start++;
		i++;
	}
	s[i] = '\0';
	return (s);
}

int	get_word_cnt(char *str, char c)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		while (*str && *str != c)
			str++;
		cnt++;
	}
	return (cnt);
}
