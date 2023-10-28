/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gokkoylu <gokkoylu@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 15:39:11 by gokkoylu      #+#    #+#                 */
/*   Updated: 2023/10/22 15:39:11 by gokkoylu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(long int num)
{
	int	digits;

	digits = 0;
	while (num != 0)
	{
		num = num / 10;
		digits++;
	}
	return (digits);
}

void	handle_sign(long int *ln, int *sign, int *digits)
{
	if (*ln < 0)
	{
		*sign = 1;
		*digits += 1;
		*ln = -*ln;
	}
}

char	*create_res(int digits)
{
	char	*res;

	res = malloc(digits + 1);
	if (res != NULL)
		res[digits] = '\0';
	return (res);
}

void	fill_res(char *res, long int ln, int digits, int sign)
{
	int	i;

	i = digits - 1;
	while (i >= sign)
	{
		res[i] = '0' + (ln % 10);
		ln = ln / 10;
		i--;
	}
	if (sign)
		res[0] = '-';
}

char	*ft_itoa(int n)
{
	int			digits;
	int			sign;
	char		*res;
	long int	ln;

	res = NULL;
	ln = n;
	sign = 0;
	if (n == 0)
		return (ft_strdup("0"));
	digits = count_digits(ln);
	handle_sign(&ln, &sign, &digits);
	res = create_res(digits);
	if (res == NULL)
		return (NULL);
	fill_res(res, ln, digits, sign);
	return (res);
}
