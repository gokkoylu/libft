/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gokkoylu <gokkoylu@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 15:54:43 by gokkoylu      #+#    #+#                 */
/*   Updated: 2023/10/22 15:54:43 by gokkoylu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*move;
	t_list	*next_node;

	if (!*lst || !del || !lst)
		return ;
	move = *lst;
	while (move)
	{
		next_node = move->next;
		del(move->content);
		free(move);
		move = next_node;
	}
	*lst = NULL;
}
