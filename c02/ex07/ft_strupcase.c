/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:55:44 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/20 18:25:02 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "Wkz|6J        ,}rY 9BYPN!.(H";
// 	for(int i=0; i<((int)sizeof(str)-1);i++)
// 		printf("%c", str[i]);
// 	printf("\n");
// 	ft_strupcase(str);
// 	for(int i=0; i<((int)sizeof(str)-1);i++)
// 		printf("%c", str[i]);	
// 	return (0);
// }