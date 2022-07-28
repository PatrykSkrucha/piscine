/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:37:55 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/23 20:30:45 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
	{
			i++;
	}
	return (s1[i] - s2[i]);
}

// int main (void)
// {
// 	char s1[] = "He";
// 	char s2[] = "Help";
// 	int x = ft_strncmp(s2, s1, 3);
// 	int y = strncmp(s2, s1, 3);
// 	printf("mine: %i or: %i", x, y);
// 	return (0);
// }