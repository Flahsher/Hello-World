#include <stdio.h>
int round(float n);

int main(){
	float n,r;
	int l;
	
	printf("������һ������");
	scanf("%f",&n);
	l=(int)n;
	r=n-l;
	printf("��������Ϊ��%d\nС������Ϊ��%f\n��������Ϊ��%d",l,r,round(n));
}

int round(float n){
	float r;
	int l;
	l=(int)n;
	r=n-l;
	if(r*10>=5){
		l++;
	}
	return l;
}
