/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:04:04 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/18 20:44:02 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (0);
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			str++;
		else
			return (0);
	}
	return (1);
}

// int main(void)
// {
// 	char str[] = "1";
// 	printf("%d", ft_str_is_numeric(str));
// 	return (0);
// }