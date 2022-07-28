/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 22:34:19 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/27 14:12:47 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 1)
		return (result);
	else
		return (result * ft_recursive_power(nb, power - 1));
}

// int main(void)
// {
// 	printf("%d", ft_recursive_power(-1, -10));
// 	return (0);
// }