#include <stdio.h>
int round(float n);

int main(){
	float n,r;
	int l;
	
	printf("请输入一个数：");
	scanf("%f",&n);
	l=(int)n;
	r=n-l;
	printf("整数部分为：%d\n小数部分为：%f\n四舍五入为：%d",l,r,round(n));
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
