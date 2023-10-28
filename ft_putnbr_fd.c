/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: gokkoylu <gokkoylu@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 16:42:13 by gokkoylu      #+#    #+#                 */
/*   Updated: 2023/10/22 16:42:13 by gokkoylu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	handle_special_cases(int *n, int fd)
{
	if (*n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		*n = 147483648;
	}
	else if (*n < 0)
	{
		ft_putchar_fd('-', fd);
		*n = -*n;
	}
	else if (*n == 0)
	{
		ft_putchar_fd('0', fd);
	}
}

static void	convert_and_write(int n, int fd)
{
	char	buffer[11];
	int		length;
	int		i;

	length = 0;
	while (n)
	{
		buffer[length++] = (n % 10) + '0';
		n /= 10;
	}
	i = length - 1;
	while (i >= 0)
	{
		ft_putchar_fd(buffer[i], fd);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	handle_special_cases(&n, fd);
	if (n != 0)
		convert_and_write(n, fd);
}
