/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:14:04 by taelkhal          #+#    #+#             */
/*   Updated: 2022/10/30 16:35:10 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	if (!dst && !src)
		return (0);
	i = 1;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (s < d)
	{
		while (i <= len)
		{
			d[len - i] = s[len - i];
			i++;
		}
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
//  int main()
//  {
//  	printf ("%s", ft_memmove("abdo","abdo", 4));
//  }