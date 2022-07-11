#include <unistd.h>

void    print(char a, char b, char c)
{
        if(a=='7'&&b=='8'&&c=='9')
        {
            write(1,&a,1);
			write(1,&b,1);
			write(1,&c,1);
        }
        else
        {
            write(1,&a,1);
			write(1,&b,1);
			write(1,&c,1);
			write(1,", ",2);
        }
}
	
void	ft_print_comb(void)
{
	char first_digit;
	char second_digit;
	char third_digit;

	first_digit = '0';
	second_digit = '1';
	third_digit = '2';
	while(first_digit<'8'){
		while(second_digit<'9'){
			while(third_digit<='9'){
			if(first_digit<second_digit<third_digit){
					print(first_digit,second_digit,third_digit);
				}
				third_digit++;
			}
			third_digit = '3';
			second_digit++;
		}
		second_digit = '2';
		first_digit++;
	}
}

int main(){
    ft_print_comb();
    return 0;
}