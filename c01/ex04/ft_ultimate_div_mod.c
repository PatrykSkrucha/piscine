/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:38:34 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/18 14:43:48 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int a = 5;
// 	int b = 3;
// 	int *ptr = &a;
// 	int *ptr2 = &b;
// 	printf("Before a: %d, b: %d\n", a, b);
// 	ft_ultimate_div_mod(ptr, ptr2);
// 	printf("After a: %d, b: %d", a, b);
// 	return (0);
// }