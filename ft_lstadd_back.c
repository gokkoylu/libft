/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: gokkoylu <gokkoylu@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 15:51:40 by gokkoylu      #+#    #+#                 */
/*   Updated: 2023/10/22 15:51:40 by gokkoylu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*move;

	move = *lst;
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (move->next != 0)
		move = move->next;
	move->next = new;
}
