#include <unistd.h>
int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}


int main(){
    //ft_putnbr(2147483647);
    int a = 16;
    a=a/10;
    a+='0';
    write(1,&a,1);  

    return 0;
}
