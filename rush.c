#include <unistd.h>
void rush(int a){
   int i=0;
   int j=0;
   while(i<a){
    if(i==0)
     {
        write(1,"A",1);
     }
    if(i>0&&i<a-1){
        write(1,"B",1);
    }
    if(i==a-1){
        write(1,"C",1);
        write(1,"\n", 2);
    }
    i++;
   }
}
int main(){
    rush(5);
    return 0;
}