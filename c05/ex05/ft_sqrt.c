/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:21:23 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/27 14:12:54 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	a;
	int	b;

	a = 0;
	while (a <= nb / 2)
	{
		b = a;
		a *= a;
		if (nb == 1)
			return (1);
		if (a == nb)
			return (b);
		if (a > nb)
			return (0);
		if (nb > 0)
			a = b + 1;
		else
			a = b - 1;
	}
	return (0);
}

// int main(void)
// {
// 	printf("%d", ft_sqrt(2147395600));
// 	return (0);
// }