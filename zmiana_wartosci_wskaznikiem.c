#include <unistd.h>
int cha(char *h){
    return *h='0';
}
int main(){
    char a='2';
    write(1, &a, 1);
    cha(&a);
    write(1, "po", 2);
    write(1, &a, 1);
    return 0;
}