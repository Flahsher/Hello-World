#include <stdio.h>
#include <string.h>

//统计一段文本中出现次数最多的英文单词。单词不区分大小写
//单词和单词之间由一个或多个非字母字符隔开。

int getPlace(char wordsType[][100],int newOne,char word[]){
	for(int i=0;i<newOne;i++){
		if(strcmp(wordsType[i],word)==0){
			return i;
		}
	}
	return -1;
}

int main(){
	int n=0;
	char words[5000][100];
	while(scanf("%s",words[n])!=EOF){
		for(int i=0;i<strlen(words[n]);i++){
			if(words[n][i]-'A'>=0 && words[n][i]-'A'<26){
				words[n][i]+='a'-'A';
			}else if(words[n][i]-'a'>=0 && words[n][i]-'a'<26){
				
			}else{
				words[n][i]='\0';
			}
		}
		n++;
	}
	
	char wordsType[n+1][100];
	int time[n];
	for(int i=0;i<n;i++){
		time[i]=0;
	}
	int newOne=0;
	for(int i=0;i<n;i++){
		int place=getPlace(wordsType,newOne,words[i]);
		if(place==-1){
			strcpy(wordsType[newOne],words[i]);
			time[newOne]++;
			newOne++;
		}else{
			time[place]++;
		}
	}
	
	int maxTime=0;
	int maxPlace;
	for(int i=0;i<n;i++){
		if(maxTime<time[i]){
			maxTime=time[i];
			maxPlace=i;
		}else if(maxTime==time[i]){
			if(wordsType[maxPlace][0]<wordsType[i][0]){
				maxPlace=i;
			}
		}
	}
	printf("%s %d",wordsType[maxPlace],maxTime);
}
