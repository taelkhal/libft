/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:40:09 by taelkhal          #+#    #+#             */
/*   Updated: 2022/10/27 16:04:16 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	if (!str)
		return (0);
	ft_bzero(str, (count * size));
	return (str);
}
// int main()
// {
//     char *p;
//     char a;
//     // p = calloc(3, 2);
//     p = ft_calloc(3, 2);
//     while(a < 3 * 2)
//     {
//         printf("%d", *p);
//         a++;
//     }
// }