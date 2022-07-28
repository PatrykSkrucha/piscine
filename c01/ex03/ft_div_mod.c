/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:32:37 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/18 14:38:11 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int a = 5;
// 	int b = 3;
// 	int div = 0;
// 	int mod = 0;
// 	int *ptr = &div;
// 	int *ptr2 = &mod;
// 	printf("Before a: %d, b: %d, div: %d, mod: %d\n", a, b, div, mod);
// 	ft_div_mod(a, b, ptr, ptr2);
// 	printf("Before a: %d, b: %d, div: %d, mod: %d", a, b, div, mod);
// 	return (0);
// }