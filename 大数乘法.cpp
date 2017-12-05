#include <stdio.h>
#include <string.h>

//´óÊý³Ë·¨

int main(void){
	char sa[100];
	char sb[100];
	char sc[100];
	scanf("%s%s",&sa,&sb);
	int alen=strlen(sa);
	int blen=strlen(sb);
	int a[alen];
	int b[blen];
	int c[alen+blen+1];
	int k=0;
	int store=0;
	
	for(int i=0;i<alen+blen+1;i++){
		c[i]=0;
	}
	
	for(int i=0;i<alen;i++){
		a[alen-1-i]=sa[i]-'0';
	}
	for(int i=0;i<blen;i++){
		b[blen-1-i]=sb[i]-'0';
	}
	
	for(int i=0;i<alen;i++){
		for(int j=0;j<blen;j++){
			c[i+j]+=a[i]*b[j];
		}
	}
	for(int i=0;i<alen+blen;i++){
		store=k+c[i];
		k=store/10;
		c[i]=store%10;
	}
	
	for(int i=alen+blen-1;i>=0;i--){
		if(c[i]!=0){
			k=i;
			break;
		}
		if(i==0){
			printf("0");
			return 0;
		}
	}
	for(int i=k;i>=0;i--){
		sc[k-i]=c[i]+'0';
//		printf("%d",c[i]);
	}
	printf("%s",sc);
	return 0;
}
