#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int size,i;
	printf("enter size of array:");
	scanf("%d",&size);
	int numbers[size];
	printf("enter the numbers of to be stored in the array:");
	
	for(i=0;i<size;i++){
		scanf("%d",&numbers[i]);
	}
	
	printf("the ele mnts in the array are:");
	for(i=0;i<size;i++){
		printf("%d",numbers[i]);
		printf(" ");
	}
	return 0;
}
