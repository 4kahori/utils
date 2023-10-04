/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:00:55 by kahori            #+#    #+#             */
/*   Updated: 2023/07/18 11:04:07 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//リストの最後に要素を追加する
//lst:リストの先頭アドレス
//new:追加する要素のアドレス
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

// //最後の要素のnextにnewのアドレスを代入

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