/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:31:30 by taelkhal          #+#    #+#             */
/*   Updated: 2022/10/30 18:12:39 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int t;
	int len;

	a = 1;
	t = 0;
	len = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
			a = a * -1;	
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		t = t * 10 + (*str - '0');
		str++;
		len++;
	}
	if(len >= 19 && a > 0)
		return (-1);
	if(len >= 19 && a < 0)
		return (0);
	return (t * a);
}
// int main()
// {
// 	printf ("%d\n", ft_atoi("18446744073709551"));
// 	printf ("%d", atoi("18446744073709551"));
// }