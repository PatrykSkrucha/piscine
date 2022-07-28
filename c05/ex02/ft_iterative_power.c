/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 22:08:45 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/27 13:54:04 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (power > 1)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}

// int main(void)
// {
// 	printf("%d", ft_iterative_power(-7, 8));
// 	return (0);
// }