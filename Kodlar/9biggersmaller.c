#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void val(int *arr,int num){
	int i;
	for(i=0;i<num;i++){
		arr[i]=rand()%150;
	}
}
void print(int *arr,int num){
	int i;
	for(i=0;i<num;i++){
		printf("%d\t",arr[i]);
		}
}
int bigger(int *arr,int num){
	int i,j=0,temp;
	while(num>j){
	    temp=arr[j];
	    for(i=0;i<num;i++){
	    	if(arr[i]>temp){
	    		temp=arr[i];
			}
		}
		j++;
	}
	return temp;
}
int small(int *arr,int num){
	int i,j=0,temp;
	while(num>j){
	    temp=arr[j];
	    for(i=0;i<num;i++){
	    	if(arr[i]<temp){
	    		temp=arr[i];
			}
		}
		j++;
	}
	return temp;
}
int main(){
	srand(time(NULL));
	int num,bignum,smlnum;
	printf("Please enter a number : ");
	scanf("%d",&num);
	int arr[num];
	val(arr,num);
	print(arr,num);
	bignum=bigger(arr,num);
	smlnum=small(arr,num);
	printf("\n");
	printf("Smallest Number : %d\n",smlnum);
	printf("Biggest Number : %d\n",bignum);
	
}