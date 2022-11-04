/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:52:01 by taelkhal          #+#    #+#             */
/*   Updated: 2022/11/01 18:37:41 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len_numbers(int nb)
{
	size_t	i;

	i = 0;
	if (nb == 0)
		i++;
	if (nb < 0)
		i++;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t		nlen;
	int			i;
	char		*str;
	long int	number;

	i = 0;
	number = n;
	nlen = ft_len_numbers(n);
	if (number < 0)
	{
		i = 1;
		number = number * -1;
	}
	str = (char *)malloc (sizeof(char) * (nlen + 1));
	if (!str)
		return (NULL);
	str[nlen] = '\0';
	while (nlen--)
	{
		str[nlen] = number % 10 + '0';
		number = number / 10;
	}
	if (i > 0)
		str[0] = '-';
	return (str);
}
