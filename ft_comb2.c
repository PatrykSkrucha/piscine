/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comb2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskrucha <pskrucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:18:51 by pskrucha          #+#    #+#             */
/*   Updated: 2022/07/11 20:52:22 by pskrucha         ###   ########.fr       */
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

void	ft_print_comb(void)
{
	char first_digit;
	char second_digit;
	char third_digit;
	char fourth_digit;

	first_digit = '0';
	second_digit = '0';
	third_digit = '0';
	fourth_digit = '1';
	while(first_digit<='9')
	{
		while(second_digit<='8')
		{
			while(third_digit<='9')
			{
				while(fourth_digit<='9')
				{
					print(first_digit,second_digit,third_digit, fourth_digit);
					fourth_digit++;
				}
				fourth_digit = '0';
				third_digit++;
			}
			third_digit = '0';
			second_digit++;
		}
		second_digit = '0';
		first_digit++;
	} 
}

int main(){
	ft_print_comb();
	return 0;
}