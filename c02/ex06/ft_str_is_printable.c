/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:51:47 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/18 20:55:13 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			str++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char str[] = "a 222";
// 	printf("%d", ft_str_is_printable(str));
// 	return (0);
// }