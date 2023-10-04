/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahori <kahori@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:50:59 by kahori            #+#    #+#             */
/*   Updated: 2023/05/27 14:58:25 by kahori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//リストの最後の要素を返す
t_list	*ft_lstlast(t_list *list)
{
	if (!list)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}
