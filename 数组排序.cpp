#include <stdio.h>
void sort(float num[],int length);

int main(){
	int length;
	printf("���������ݸ�����\n");
	scanf("%d",&length);
	float num[length];
	
	printf("\n���������ݣ�\n");
	for(int i=0;i<length;i++){
		scanf("%f",&num[i]);
	}
	
	sort(num,length);
	printf("\n�����Ϊ��\n");
	for(int i=0;i<length;i++){
		printf("%f\n",num[i]);
	}
}

void sort(float num[],int length){		//ѡ������ 
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
