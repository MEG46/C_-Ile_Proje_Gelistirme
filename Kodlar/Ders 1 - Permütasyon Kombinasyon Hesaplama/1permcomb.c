#include <stdio.h>
int perm(int num1,int num2){
	int i,prm=1,prm1=1;
	if(num1<0||num2<0){
		printf("Invalid Process!\n");
	}else{
		num2=num1-num2;
		for(i=1;i<=num1;i++){
			prm*=i;
		}
		for(i=1;i<=num2;i++){
			prm1*=i;
		}
	}
	return prm/prm1;
}
int comb(int num1,int num2){
	int i,prm=1,prm1=1,prm2=1,num3;
	if(num1<0||num2<0){
		printf("Invalid Process!\n");
	}else{
		num3=num1-num2;
		for(i=1;i<=num1;i++){
			prm*=i;
		}
		for(i=1;i<=num2;i++){
			prm1*=i;
		}
		for(i=1;i<=num3;i++){
			prm2*=i;
		}
	}
	return prm/(prm1*prm2);
}
void print(int num1,int num2,int com,int per){
	printf("Permutation of %d and %d = %d\n",num1,num2,per);
	printf("Combination of %d and %d = %d\n",num1,num2,com);
}
int main(){
	int num1,num2;
	int com,per;
	printf("Please enter a number : ");
	scanf("%d",&num1);
	printf("Please enter a number : ");
	scanf("%d",&num2);
	if(num2>num1){
		per=perm(num2,num1);
		com=comb(num2,num1);
		print(num2,num1,com,per);
	}else if(num1==num2){
		per=perm(num1,num2);
		com=comb(num1,num2);
		print(num1,num2,com,per);
	}else{
		per=perm(num1,num2);
		com=comb(num1,num2);
		print(num1,num2,com,per);
	}
	return 0;
}