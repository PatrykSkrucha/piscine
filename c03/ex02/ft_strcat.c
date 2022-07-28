/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:31:40 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/21 19:22:35 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{	
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(dest);
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main ()
// {
//   char str[80];
//   ft_strcat (str,"these ");
//   ft_strcat (str,"strings ");
//   ft_strcat (str,"are ");
//   ft_strcat (str,"concatenated.");
//   puts (str);
//   return 0;
// }