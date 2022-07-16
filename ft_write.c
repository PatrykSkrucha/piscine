#include <unistd.h>
#include <stdio.h>
void print_array(int arr[2][2]){
	char c;
	int i;
	int j;

	i = 0;
	j = 0;
	while(i<2){
		while(j<2){
			c = arr[i][j]+'0';
			j++;
			write(1,&c,1);
			write(1, " ", 1);
		}
		write(1, "\n",1);
		j=0;
		i++;
	}
}

int main(void){
	int tab[2][2]={{1,2},{3,4}};

	print_array(tab);
	
}