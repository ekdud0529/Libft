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

int	get_num_len(int n);

char	*ft_itoa(int n)
{
	char		*str;
	long long	num;
	int			sign;
	int			len;

	sign = 1;
	if (n < 0)
	{
		sign = -1;
		num *= -1;
	}
	len = get_num_len(num);
	if (sign < 0)
		len++;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	if (sign < 0)
		str[0] = '-';
	str[len] = '\0';
	while (n && --len)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

int	get_num_len(int n)
{
	int	len;

	len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}
