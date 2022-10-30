/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taelkhal <taelkhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:52:09 by taelkhal          #+#    #+#             */
/*   Updated: 2022/10/30 16:10:38 by taelkhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    if (lst == NULL)
        return (0);
    while (lst != NULL)
    {
            i++;
        lst = lst -> next;
    }
    return (i);
}
// int main()
// {
//     t_list *list;
//     t_list *list1;
//     t_list *list2;

//     list = ft_lstnew("taha");
//     list1 = ft_lstnew("13");
//     list2 = ft_lstnew ("37");

//     list -> next = list1;
//     list1 -> next = list2;
//     list2 -> next = NULL;
//     printf ("%d", ft_lstsize(list));
// }