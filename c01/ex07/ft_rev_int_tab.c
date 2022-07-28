/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:04:00 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/18 16:13:36 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

// int	main(void)
// {
// 	int arr[] = {1, 2, 3, 4, 5};
// 	int size = sizeof(arr)/4;
// 	printf("Before: ");
// 	for(int i=0; i<size; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\nAfter: ");
// 	ft_rev_int_tab(arr, size);
// 	for(int i=0; i<size; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	return (0);
// }