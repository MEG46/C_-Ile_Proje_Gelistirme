#include <stdio.h>

int main(){
	while(1){
	int num;
	printf("Please enter a number : ");
	scanf("%d",&num);
	if(num<=0){
		printf("Please enter a valid number!\n");
	}else if(num==1){
		printf("1");
	}else if(num==2){
		printf("1\t1");
	}else if(num>2){
		long long int arr[num],i;
		arr[0]=1;
		arr[1]=1;
		for(i=2;i<num;i++){
			arr[i]=arr[i-2]+arr[i-1];
		}
		for(i=0;i<num;i++){
			printf("%lld\t",arr[i]);
		}
	}
	printf("\n");
}
	return 0;
}