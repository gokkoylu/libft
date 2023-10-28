/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: gokkoylu <gokkoylu@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 16:44:01 by gokkoylu      #+#    #+#                 */
/*   Updated: 2023/10/22 16:44:01 by gokkoylu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	const char	*ptr;

	if (fd < 0 || !str)
		return ;
	ptr = str;
	while (*ptr)
	{
		write(fd, ptr, 1);
		ptr++;
	}
}
