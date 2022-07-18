/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:55:54 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/18 17:59:08 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main (void)
// {
// 	char str[] = "Hello";
// 	int size = sizeof(str);
// 	size -= 1;
// 	char dest[size];
// 	printf("Before str: ");
// 	for(int i=0; i<size; i++)
// 	{
// 		printf("%c", str[i]);
// 	}
// 	printf(" dest: ");
// 	for(int i=0; i<size; i++)
// 	{
// 		printf("%c", dest[i]);
// 	}
// 	ft_strncpy(dest, str, 2);
// 	printf("After str: ");
// 	for(int i=0; i<size; i++)
// 	{
// 		printf("%c", str[i]);
// 	}
// 	printf(" dest: ");
// 	for(int i=0; i<size; i++)
// 	{
// 		printf("%c", dest[i]);
// 	}
// 	return (0);
// }
