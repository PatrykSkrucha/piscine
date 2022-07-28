/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:59:26 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/27 14:14:53 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	control;

	control = nb - 1;
	result = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (control > 0)
	{
		result *= control;
		control--;
	}
	return (result);
}

// int main(void)
// {
// 	int a = 3;
// 	printf("%d",ft_iterative_factorial(-1));
// 	return 0;
// }