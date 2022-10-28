/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:47:04 by taelkhal          #+#    #+#             */
/*   Updated: 2022/10/26 20:46:46 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	a;
	char	*sr;

	i = start;
	a = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	sr = malloc (sizeof(char) * (len + 1));
	if (!sr)
		return (NULL);
	while (s[i] && a < len)
	{
		sr[a] = s[i];
		i++;
		a++;
	}
	sr[a] = '\0';
	return (sr);
}

// #include <stdio.h>
// int main()
// {
//     //char a[] = "aymennnsj";
//     printf("%s",ft_substr(NULL, 5, 5));
// }
