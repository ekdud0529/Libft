/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:16:04 by daykim            #+#    #+#             */
/*   Updated: 2022/01/23 15:14:54 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_num_len(long long n);

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long long	num;

	num = n;
	len = get_num_len(num);
	if (n < 0)
	{
		num *= -1;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	while (num && --len)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

int	get_num_len(long long n)
{
	int	len;

	len = 0;
	if (n < 0)
		n *= -1;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}
