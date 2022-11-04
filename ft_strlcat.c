/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:54:28 by taelkhal          #+#    #+#             */
/*   Updated: 2022/11/03 13:14:03 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	destlen;
	size_t	sclen;

	i = 0;
	sclen = ft_strlen(src);
	if (!dstsize || dstsize <= ft_strlen(dst))
		return (sclen + dstsize);
	destlen = ft_strlen(dst);
	while (src[i] && i < dstsize - destlen - 1)
	{
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = '\0';
	return (destlen + sclen);
}
