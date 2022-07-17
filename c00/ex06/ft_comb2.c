/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comb2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:18:51 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/17 16:31:52 by pskrucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c, char d)
{
	if (a == '0' && b == '0' && c == '0' && d == '1' )
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
	}
	else
	{
		if (c > a || (c == a && d > b))
		{
			write(1, ", ", 2);
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
		}
	}
}

void	print_whiles(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					print(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

void	ft_print_comb2(void)
{
	char	first_digit;
	char	second_digit;
	char	third_digit;
	char	fourth_digit;

	first_digit = '0';
	second_digit = '0';
	third_digit = '0';
	fourth_digit = '1';
	print_whiles(first_digit, second_digit, third_digit, fourth_digit);
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/