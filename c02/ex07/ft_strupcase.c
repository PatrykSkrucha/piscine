/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:55:44 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/18 22:17:58 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	if (*str == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			{
				*str -= 32;
			}
		str++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "aAb";
// 	for(int i=0; i<(sizeof(str)-1);i++)
// 		printf("%c", str[i]);
// 	printf("\n");
// 	ft_strupcase(str);
// 	for(int i=0; i<(sizeof(str)-1);i++)
// 		printf("%c", str[i]);	
// 	return (0);
// }