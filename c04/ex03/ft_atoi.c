/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:36:03 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/25 17:21:49 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	number;
	int	sign;

	sign = 0;
	number = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v'
		|| *str == '\n' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign++;
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		number = number * 10 + *str - '0';
		str++;
	}
	if (sign % 2)
		return (number * -1);
	else
		return (number);
}

// int main(void)
// {
// 	printf("%d", ft_atoi(" ---+--+1234ab567"));
// 	return (0);
// }