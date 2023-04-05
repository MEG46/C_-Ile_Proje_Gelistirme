#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sort(int arr[],int num){
	int i,j=0,temp;
	for(i=0;i<num;i++){
		arr[i]=rand()%400;
	}
	printf("The Unsorted Array :\n\n");
	for(i=0;i<num;i++){
		printf("%d\t",arr[i]);
	}
	while(num>j){
		for(i=0;i<num-1;i++){
			if(arr[i]>arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		j++;
	}
	printf("\n\nThe Sorted Array From Smaller To Bigger:\n\n");
	for(i=0;i<num;i++){
		printf("%d\t",arr[i]);
	}
	j=0;
	while(num>j){
		for(i=0;i<num-1;i++){
			if(arr[i]<arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		j++;
	}
	printf("\n\nThe Sorted Array From Bigger To Smaller:\n\n");
	for(i=0;i<num;i++){
		printf("%d\t",arr[i]);
	}
}
int main(){
	srand(time(NULL));
	int num;
	printf("Please enter how many elements do you want to add in your array : ");
	scanf("%d",&num);
	int arr[num];
	sort(arr,num);
}