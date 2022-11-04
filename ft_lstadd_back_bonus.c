/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:47:00 by taelkhal          #+#    #+#             */
/*   Updated: 2022/11/01 22:09:57 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (lst == NULL)
		return ;
	else if (*lst == NULL)
		*lst = new;
	else
	{
		ptr = *lst;
		while (ptr -> next != NULL)
			ptr = ptr -> next;
		ptr -> next = new;
	}
}
