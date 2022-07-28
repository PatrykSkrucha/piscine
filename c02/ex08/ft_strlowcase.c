/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:48:32 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/20 18:25:12 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "aAb";
// 	for(int i=0; i<((int)sizeof(str)-1);i++)
// 		printf("%c", str[i]);
// 	printf("\n");
// 	ft_strlowcase(str);
// 	for(int i=0; i<((int)sizeof(str)-1);i++)
// 		printf("%c", str[i]);	
// 	return (0);
// }