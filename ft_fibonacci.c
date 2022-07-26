/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 22:44:04 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/26 18:43:01 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int index, int *b, int i, int a)
{
	if (index > 0)
	{	
		*b = 1;
		while (i < index - 1)
		{
			*b += a;
			a = *b - a;
			i++;
		}
	}
	else
	{
		*b = -1;
		while (i > index + 1)
		{
			*b += a;
			a = *b - a;
			i--;
		}
	}
}

int	ft_fibonacci(int index)
{
	int	a;
	int	b;
	int	i;

	a = 0;
	i = 0;
	ft_ft(index, &b, i, a);
	if (index == 0)
		return (0);
	else
		return (b);
}

int main(void)
{
	printf("%d", ft_fibonacci(-6));
	return (0);
}