#include <stdio.h>
void sort(float num[],int length);

int main(){
	int length;
	printf("请输入数据个数：\n");
	scanf("%d",&length);
	float num[length];
	
	printf("\n请输入数据：\n");
	for(int i=0;i<length;i++){
		scanf("%f",&num[i]);
	}
	
	sort(num,length);
	printf("\n排序后为：\n");
	for(int i=0;i<length;i++){
		printf("%f\n",num[i]);
	}
}

void sort(float num[],int length){		//选择排序 
	for(int i=0;i<length-1;i++){
		for(int j=i+1;j<length;j++){
			if(num[i]-num[j]>1e-6){		//num[i]>num[j]
				float k=num[i];
				num[i]=num[j];
				num[j]=k;
			}
		}
	}
}
