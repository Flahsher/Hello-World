#include <stdio.h>
#include <string.h>

//¸ù¾İASCIIÂëÅÅĞò,¿Õ×Ö·û´®·ÅÄ©Î² 

void sortStr(char str[][100],int n){
	int nullNum=0;
	for(int i=0;i<n-1;i++){
		if(str[i][0]=='\0'){
			nullNum++;
		}
	}
	for(int j=0;j<nullNum;j++){
		for(int i=0;i<n-1;i++){
			if(str[i][0]=='\0'){
				strcpy(str[i],str[i+1]);
				str[i+1][0]='\0';
			}
		}
	}
	
	for(int i=0;i<n-nullNum-1;i++){
		for(int j=i+1;j<n-nullNum;j++){
			int len=strlen(str[i])>strlen(str[j])?strlen(str[j]):strlen(str[i]);
			for(int k=0;k<=len;k++){
				if(str[i][k]>str[j][k]){
					char s[100];
					strcpy(s,str[i]);
					strcpy(str[i],str[j]);
					strcpy(str[j],s);
					break;
				}else if(str[i][k]<str[j][k]){
					break;
				}
				
			}
		}
	}
}

int main(){
	char str[10][100]={
		{"hello"},
		{"play"},
		{"\0"},
		{"optimistic"},
		{"\0"},
		{"English"},
		{"player"},
		{"on"},
		{"I"},
		{"a"}
	}; 
	sortStr(str,10);
	for(int i=0;i<10;i++){
		printf("%s\n",str[i]);
	}
}
