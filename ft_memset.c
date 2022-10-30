/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:33:32 by taelkhal          #+#    #+#             */
/*   Updated: 2022/10/30 16:35:18 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	while (len > 0)
	{
		str[i] = ((unsigned char)c);
		i++;
		len--;
	}
	return (b);
}
// int main()
// {
// 	int b[] = {1, 1, 1, 1, 1};
// 	int i = 0;
// 	int c = 256;
// 	ft_memset(b + 2, c, 1);

// 	while (i < 5)
// 	{
// 		printf ("%d\n", b[i]);
// 		i++;
// 	}
// 	return (0);
// }