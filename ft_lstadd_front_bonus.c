/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:52:25 by taelkhal          #+#    #+#             */
/*   Updated: 2022/10/29 17:47:38 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	if (new != NULL)
		*lst = new;
}
// int main()
// {
// 	t_list *list;
// 	t_list *list1;
// 	t_list *listn;

// 	list = ft_lstnew("taha");
// 	list1 = ft_lstnew("1337");
// 	listn = ft_lstnew("boss");

// 	list -> next = list1;
// 	list1 -> next = NULL;
// 	ft_lstadd_front(&list, listn);
// 	while (listn)
// 	{
// 		printf ("%s\n", listn -> content);
// 		listn = listn -> next;
// 	}
// }