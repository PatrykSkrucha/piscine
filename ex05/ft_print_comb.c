#include <unistd.h>
#include <stdio.h>

void ft_print_comb(void){
   int a=48;
   int b=49;
   int c=50;
   
   /*for(c;c<=57;c++){
    for(b;b<=56;c++){
        for(c;c<=55;c++){
            if(a<b && b<c){
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
            }
        }
    }
   }*/
   int v[] = {a,b};
   write(1, &*v, 1);
}

int main(){
    ft_print_comb();
    return 0;
}