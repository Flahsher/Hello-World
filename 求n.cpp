#include  <stdio.h>
int count1(int n);

int main(){
	int n;
	printf("请输入n的值：\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int j=1;j<=i;j++){
			sum+=count1(j);
		}
//		printf("%d\t%d\n",i,sum);
		if(sum==i){
			printf("\n求得结果为：%d",i);
		}
	}
	return 0;
}

int count1(int n){
	int a=n;
	int b=0;
	int sum=0;
	do{
		b=a%10;
		a=a/10;
		if(b==1){
			sum++;
		}
	}while(a!=0);
	return sum;
}
