#include <stdio.h>
void compare(float a,float b);

int main(){
	float a,b;
	printf("请输入两个实数：\n");
	scanf("%f%f",&a,&b);
	compare(a,b);
}

void compare(float a,float b){
	if(a-b<1e-6 && a-b>-1e-6){
		printf("两数相等");
	}else{
		if(a-b>1e-6){
			printf("两数不相等，较大的为%f\n",a);
		}else{
			printf("两数不相等，较大的为%f\n",b);
		}
	} 
}
