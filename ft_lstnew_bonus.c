/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:47:46 by taelkhal          #+#    #+#             */
/*   Updated: 2022/10/28 18:57:43 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *list;

	list = (t_list *)malloc((sizeof(t_list)));
	if (list == NULL)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
// int main()
// {
// 	t_list	*lst;
// 	t_list  *lst1;
// 	lst = ft_lstnew("test");
// 	lst1 = ft_lstnew("tfdszfdsfest");
// 	lst->next = lst1;
// 	printf("%s\n",lst->content);
// 	lst = lst->next;
// 	printf("%s\n",lst->content);
// }