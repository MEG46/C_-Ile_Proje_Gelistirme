#include <stdio.h>
void div(int num){
	if(num<1){
		printf("Please enter a positive number!\n");
	}else if(num==1){
		printf("The Divisor of  %d:\n1",num);
		printf("\nSum of Divisors: %d\n",num);
	}else if(num>1){
		int result=1,i;
		printf("The Divisors of %d:\n",num);
		printf("1\t");
		for(i=2;i<=num;i++){	
			if(num%i==0){
				printf("%d\t",i);
				result+=i;
			}
	}
	printf("\nSum of divisors : %d\n",result);
	}
}
int main(){
	int num;
	while(1){
		printf("Please enter a number : ");
		scanf("%d",&num);
		div(num);
		printf("\n");
	}
}