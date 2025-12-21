/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamkoum <rkamkoum@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:11:45 by rkamkoum          #+#    #+#             */
/*   Updated: 2025/12/21 17:37:24 by rkamkoum         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*dest;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	dest = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&dest, del);
			return (NULL);
		}
		ft_lstadd_back(&dest, new_node);
		lst = lst->next;
	}
	return (dest);
}
