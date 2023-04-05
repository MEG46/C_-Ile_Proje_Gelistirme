#include <stdio.h>
void invalid(){
	printf("Please enter a valid date!\n");
	
}
int main(){
	while(1){
	int day[2],month[2],year[2],i,flag=0;
	for(i=0;i<2;i++){
		printf("Please enter a date : (day:month:year) : ");
		scanf("%d:%d:%d",&day[i],&month[i],&year[i]);
	}
	for(i=0;i<2;i++){
		if((day[i]>0&&day[i]<32)&&(month[i]>0&&month[i]<13)&&(year[i]>0)){
			flag=1;
		}else{
			flag=0;
			break;
		}
	}
	if(flag==1){
		int result=day[0]+(month[0]*30)+(year[0]*365)-(day[1]+(month[1]*30)+year[1]*365);
		int daydif=0,mondif=0,yeardif=0;
		if(result<0){
			result=0-result;
		}
		printf("The Day Difference Of %d:%d:%d and %d:%d:%d : %d\n",day[0],month[0],year[0],day[1],month[1],year[1],result);
		while(result>365){
			result-=365;
			yeardif++;	
		}
		while(result>30){
			result-=30;
			mondif++;	
		}
		daydif=result;
		printf("Day : %d\nMonth : %d\nYear : %d\n",daydif,mondif,yeardif);
	}else{
		invalid();
	}
}
	return 0;
}