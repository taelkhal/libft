/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:49:15 by taelkhal          #+#    #+#             */
/*   Updated: 2022/10/30 16:33:59 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	if (fd < 0)
		return ;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}
#include <fcntl.h>
int main()
{
	int fd = open ("txt.txt", O_RDWR | O_CREAT);
	ft_putstr_fd(NULL, fd);
}