#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void val(int arr[],int num){
	int i,m,flag,j=0,temp;
	printf("The Array:\n\n");
	for(i=0;i<num;i++){
		arr[i]=rand()%300;
	}
	for(i=0;i<num;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n\nThe Prime Numbers In The Array:\n\n");
	while(num>j){
		flag=0;
		temp=arr[j];
		if(temp<2){
			continue;
		}else{
			m=temp/2;
			for(i=2;i<m;i++){
				if(temp%i==0){
					flag=1;
					break;
				}
			}
			if(flag==0){
				printf("%d\t",arr[j]);
			}
		}
		j++;
	}
}
int main(){
	srand(time(NULL));
	int num;
	printf("Please enter how many elements do you want in your array : ");
	scanf("%d",&num);
	int arr[num];
	val(arr,num);
	
}