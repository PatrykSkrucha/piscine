/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:49:22 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/18 20:51:30 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			str++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char str[] = "";
// 	printf("%d", ft_str_is_uppercase(str));
// 	return (0);
// }