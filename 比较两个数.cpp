#include <stdio.h>
void compare(float a,float b);

int main(){
	float a,b;
	printf("����������ʵ����\n");
	scanf("%f%f",&a,&b);
	compare(a,b);
}

void compare(float a,float b){
	if(a-b<1e-6 && a-b>-1e-6){
		printf("�������");
	}else{
		if(a-b>1e-6){
			printf("��������ȣ��ϴ��Ϊ%f\n",a);
		}else{
			printf("��������ȣ��ϴ��Ϊ%f\n",b);
		}
	} 
}
