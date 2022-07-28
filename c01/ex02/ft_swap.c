/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:26:38 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/18 14:31:53 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

// int main(void)
// {
// 	int a = 1;
// 	int b = 2;
// 	int *ptr = &a;
// 	int *ptr2 = &b;
// 	printf("Before: a: %d, b: %d\n", a, b);
// 	ft_swap(ptr, ptr2);
// 	printf("After: a: %d, b: %d\n", a, b);
// 	return (0);
// }