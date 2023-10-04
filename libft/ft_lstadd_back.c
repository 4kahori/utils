/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:00:55 by kahori            #+#    #+#             */
/*   Updated: 2023/10/04 15:24:37 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr = ft_lstlast(*lst);
	ptr->next = new;
}

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

// int main (void)
// {
// 	t_list *list;
// 	t_list *new;

// 	list = ft_lstnew("1");
// 	new = ft_lstnew("2");
// 	ft_lstadd_back(&list, new);
// 	printf("list->content: %s\n", list->content);
// 	printf("list->next->content: %s\n", list->next->content);
// 	return (0);
// }

// // list->content: 1
// list->next->content: 2