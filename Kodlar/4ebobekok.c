#include <stdio.h>
int ebobp(int num1,int num2){
	int val=1,i;
	for(i=2;i<num2;i++){
		if(num1%i==0&&num2%i==0){
			val=i;
		}
	}
	return val;
}
int ekokp(int num1,int num2){
	
	return num1 * num2 / ebobp(num1,num2);
}
void printres(int num1,int num2,int ebob,int ekok){
	printf("EBOB(%d,%d) = %d\n",num1,num2,ebob);
	printf("EKOK(%d,%d) = %d\n",num1,num2,ekok);
}
int main(){
	int num1,num2,ebob,ekok;
	printf("Please enter a number : ");
	scanf("%d",&num1);
	printf("Please enter a number : ");
	scanf("%d",&num2);
	if(num2>num1){
		ebob=ebobp(num2,num1);
		ekok=ekokp(num2,num1);
		printres(num2,num1,ebob,ekok);
	}else{
		ebob=ebobp(num1,num2);
		ekok=ekokp(num1,num2);
		printres(num1,num2,ebob,ekok);
	}
}