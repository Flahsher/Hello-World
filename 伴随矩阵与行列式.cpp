#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int round(float n);

int main(){
	int k,n;
	char *p;
	
	printf("请输入矩阵阶数n：");
	scanf("%d",&n);
	char str[2*n];
	float A[n][n],B[n-1][n-1];
	int C[n][n];
	
	printf("请输入矩阵A的数据：\n"); 
	for(int i=0;i<n;i++){
		k=0;
		fflush(stdin);					//清除缓存 
		gets(str);						//获取字符串 
		p=strtok(str," ");				//以“ ”为标志分割字符串 
		while(p!=NULL){
			A[i][k]=(float)atoi(p);		//字符转换为整形
			p=strtok(NULL," ");
			k++;
 		}
 		if(k!=n){
 			printf("错误！\n") ;
 			return 0; 
		}
	}

	for(int p=0;p<n*n;p++){
		k=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==p/n || j==p%n){
					continue;
				}
				B[k/(n-1)][k%(n-1)]=A[i][j];
				k++;
			}
		}
		
		float sign=1.0;
		for(int i=0;i<p/n+p%n+2;i++){
			sign*=-1.0;
		}
	
		float t=0;
		for(int i=0;i<n-1-1;i++){				//i列j行 
			for(int j=i+1;j<n-1;j++){
				for(int l=j;l<n-1;l++){
					if(B[i][i]==0){
						for(int m=0;m<n-1;m++){
							B[i][m]+=(B[l][m]);
						}
					}else{
						break;
					}
				}
				if(B[i][i]==0){
					C[p%n][p/n]=0;
				}else{
					t=B[j][i]/B[i][i];
					for(int m=0;m<n-1;m++){
						B[j][m]-=(B[i][m]*t);
					} 
				}
			}
		}
	
		float sum=1;
		for(int i=0;i<n-1;i++){
			sum*=B[i][i];
		}
		C[p%n][p/n]=sign*round(sum);
	}
	
	printf("\n其伴随矩阵为：\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
	
	float t=0;
	for(int i=0;i<n-1;i++){				//i列j行 
		for(int j=i+1;j<n;j++){
			for(int l=j;l<n;l++){
				if(A[i][i]==0){
					for(int m=0;m<n;m++){
						A[i][m]+=(A[l][m]);
					}
				}else{
					break;
				}
			}
			if(A[i][i]==0){
				printf("\n|A|= 0");
				return 0;
			}
			t=A[j][i]/A[i][i];
			for(int m=0;m<n;m++){
				A[j][m]-=(A[i][m]*t);
			} 
		}
	}
	
	float sum=1;
	for(int i=0;i<n;i++){
		sum*=A[i][i];
	}
	printf("\n行列式为：\n|A|= %d\n\n",round(sum));
	
	system("pause");
	return 0;
} 

int round(float n){
	float r;
	int l;
	if(n>0){
		l=(int)n;
		r=n-l;
		if(r*10>=5){
			l++;
		}
		return l;
	}else{
		l=(int)-n;
		r=-n-l;
		if(r*10>=5){
			l++;
		}
		return -l;
	}
}

