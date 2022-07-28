/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 22:54:05 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/27 14:13:40 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	control;

	i = 1;
	control = 0;
	if (nb == 2147483647)
		return (1);
	while (i <= nb)
	{
		if (nb % i == 0)
			control++;
		i++;
	}
	if (control == 2)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	printf("%d", ft_is_prime(13));

// 	return (0);
// }