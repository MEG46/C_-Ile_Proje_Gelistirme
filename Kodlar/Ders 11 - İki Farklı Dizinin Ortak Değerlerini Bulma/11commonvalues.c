#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void value(int *arr1,int *arr2,int num1,int num2){
	int i;
	for(i=0;i<num1;i++){
		arr1[i]=rand()%30;
	}
	for(i=0;i<num2;i++){
		arr2[i]=rand()%40;
	}
}
void compare(int *arr1,int *arr2,int num1,int num2){
	int temp,i,j=0;
	printf("The Common Values:\n\n");
	while(num1>j){
		temp=arr1[j];
		for(i=0;i<num2;i++){
			if(temp==arr2[i]){
				printf("%d\t",temp);
			}
		}
		j++;
	}
	printf("\n");
}
void print(int *arr1,int *arr2,int num1,int num2){
	int i;
	printf("1st Array:\n\n");
	for(i=0;i<num1;i++){
		printf("%d\t",arr1[i]);
	}
	printf("\n\n2nd Array:\n\n");
	for(i=0;i<num2;i++){
		printf("%d\t",arr2[i]);
	}
	printf("\n");
}
int main(){
	srand(time(NULL));
	
	int num1,num2;
	printf("Please enter 1st array length : ");
	scanf("%d",&num1);
	printf("Please enter 2nd array length : ");
	scanf("%d",&num2);
	int arr1[num1],arr2[num2];
	value(arr1,arr2,num1,num2);
	print(arr1,arr2,num1,num2);
	compare(arr1,arr2,num1,num2);
	
}