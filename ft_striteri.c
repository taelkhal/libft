/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:04:37 by taelkhal          #+#    #+#             */
/*   Updated: 2022/10/30 16:24:48 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, (s + i));
		i++;
	}
}

// void f(unsigned int i, char *c)
// {

// 	i = 0;
// 	while (c[i])
// 	{
// 		c[i] = c[i] - 32 ;
// 		i++;
// 	}
// }

// int main()
// {
// 	char str[] = "abcd";
// 	ft_striteri(str, f);
// 	printf ("%s", str);
// }