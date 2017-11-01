#include <stdio.h>
bool isLeapYear(int year);

int main(){
	int year;
	printf("请输入一个年份：\n");
	scanf("%d",&year);
	if(isLeapYear(year)){
		printf("\n%d年是闰年",year);
	}else{
		printf("\n%d年不是闰年",year);
	}
} 

bool isLeapYear(int year){
	if(year/100==0){
		if(year%400==0){
			return true;
		}else{
			return false;
		}
	}else{
		if(year%4==0){
			return true;
		}else{
			return false;
		}
	}
}
