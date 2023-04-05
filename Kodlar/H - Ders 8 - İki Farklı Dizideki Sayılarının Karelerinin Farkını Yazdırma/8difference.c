#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void calc(int num){
	if(num<1){
		printf("Please enter a positive number!\n");
	}else{
		int arr1[num],arr2[num],i,result;
		for(i=0;i<num;i++){
			arr1[i]=rand()%100;
		}
		for(i=0;i<num;i++){
			arr2[i]=rand()%50;
		}
		printf("1st Array:\n\n");
		for(i=0;i<num;i++){
			printf("%d\t",arr1[i]);
		}
		printf("\n\n2nd Array:\n\n");
		for(i=0;i<num;i++){
			printf("%d\t",arr2[i]);
		}
		printf("\n\nThe Difference of the 2nd exponential values between 1st array and 2nd array:\n\n");
		for(i=0;i<num;i++){
			result=pow(arr1[i],2)-pow(arr2[i],2);
			if(result<0){
				result=0-result;
			}
			printf("%d\t",result);
		}
	}
}
int main(){
	srand(time(NULL));
	int num;
	printf("Please enter a number : ");
	scanf("%d",&num);
	calc(num);
}