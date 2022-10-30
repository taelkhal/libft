/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:58:12 by taelkhal          #+#    #+#             */
/*   Updated: 2022/10/30 16:25:08 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		slen;
	int		i;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	str = malloc (sizeof(char) * (slen + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char f(unsigned int i, char c)
// {
//     char str;
//     str = c + 1 ;
//     return (str);
// }

// int main()
// {
//     char str1[] = "ABC";
//     printf("%s\n", ft_strmapi(str1, *f));
// }