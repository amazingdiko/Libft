/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:37:58 by wmozella          #+#    #+#             */
/*   Updated: 2021/10/21 23:59:44 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		minus;
	char	number;

	minus = 1;
	if (n < 0)
		minus = -1;
	if (n * minus >= 10)
		ft_putnbr_fd(n / 10, fd);
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	if (minus < 0 && !(n * minus >= 10) && !(n == -2147483648))
		write (fd, "-", 1);
	if (!(n == -2147483648))
	{
		number = n % 10 * minus + '0';
		write (fd, &number, 1);
	}
}
