#include <stdio.h>
bool isLeapYear(int year);

int main(){
	int year;
	printf("������һ����ݣ�\n");
	scanf("%d",&year);
	if(isLeapYear(year)){
		printf("\n%d��������",year);
	}else{
		printf("\n%d�겻������",year);
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
