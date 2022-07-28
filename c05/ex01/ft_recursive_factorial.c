/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 21:35:40 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/27 14:14:15 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;
	int	control;

	control = nb - 1;
	result = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	if (control < 1)
		return (result);
	else
		return (result * ft_recursive_factorial(nb - 1));
}

// int main(void)
// {
// 	int a = 3;
// 	printf("%d", ft_recursive_factorial(0));
// }