#include  <stdio.h>
#include  <stdlib.h>
int count1(int n);

int main(){
	int sum=0;
	for(int i=1;i<=INT_MAX;i++){	
		sum+=count1(i);
		printf("%d\t%d\n",i,sum);
		if(sum==i && i!=1){
			printf("\n求得大于1的最小结果为：%d",i);
			break;
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
