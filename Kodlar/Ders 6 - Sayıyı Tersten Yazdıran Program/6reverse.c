#include <stdio.h>
void print(int num){
	int c;
	while(num!=0){
		if(num<0){
			printf("-");
			num=0-num;
		}
		c=num%10;
		printf("%d",c);
		num/=10;
	}
}
int main(){
	int num;
	while(1){
		printf("Please enter a number : ");
		scanf("%d",&num);
		print(num);
		printf("\n");
	}
}