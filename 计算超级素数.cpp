#include <stdio.h>
bool isSuperPrime(int num);
bool isPrime(int num);

int main(){
	int n=0;
	int sum=0;
	int max;
	for(int i=100;i<10000;i++){
		if(isSuperPrime(i)){
			n++;
			sum+=i;
			max=i;
			printf("%d\n",i);
		}
	}
	printf("100-9999之间的超级素数有%d个，和为%d，最大的为%d\n",n,sum,max);
} 

bool isSuperPrime(int num){
	int sum=0;
	int product=1;
	int squareSum=0;
	int a;
	if(isPrime(num)){
		while(num!=0){
			a=num%10;
			num=num/10;
			sum+=a;
			product*=a;
			squareSum+=(a*a);
		}
		if(isPrime(sum) && isPrime(product) && isPrime(squareSum)){
			return true;
		}else{
			return false;
		}
	}else{
		return false;
	}
}

bool isPrime(int num){
	if(num==1 || num==0){
		return false;
	}
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}


