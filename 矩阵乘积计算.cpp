#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	
	int s,r,m,n;				//s*r m*n
	char *p;
	
	printf("���������A����*�к;���B����*�У�\n") ;
	scanf("%d%d%d%d",&s,&r,&m,&n);
	if(r!=m){
		printf("AB�����壡"); 
		return 0;
	}
	
	char stra[2*r];
	char strb[2*n];
	int A[s][r],B[m][n];
	int x,y,k;
   
	printf("���������A��\n") ;
	for(int i=0;i<s;i++){
		k=0;
		fflush(stdin);					//������� 
		gets(stra);						//��ȡ�ַ��� 
		p=strtok(stra," ");				//�ԡ� ��Ϊ��־�ָ��ַ��� 
		while(p!=NULL){
			A[i][k]=atoi(p);			//�ַ�ת��Ϊ����
			p=strtok(NULL," ");
			k++;
 		}
 		if(k!=r){
 			printf("����\n") ;
 			return 0; 
		}
	}
	
	printf("���������B��\n") ;
	for(int i=0;i<m;i++){
		k=0;
		fflush(stdin);
		gets(strb);
		p=strtok(strb," ");
		while(p){ 
			B[i][k]=atoi(p); 
			p=strtok(NULL," ");  
			k++;
 		}
 		if(k!=n){
 			printf("����\n") ;
 			return 0; 
		}
	}
	
	printf("\n");
	
	int sum=0;
	for(int p=0;p<s;p++){
		for(int i=0;i<n;i++){
			for(int j=0;j<r;j++){
				sum+=A[p][j]*B[j][i];
			}
			printf("%d\t",sum);
			sum=0;
		}
		printf("\n");
	}
}

