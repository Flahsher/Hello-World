#include <stdio.h>
#include<float.h>
int main(){
	int x=2.2;
	short y=0x7FFF;
	short z=0xFFFF;
	unsigned short w=0xFFFF;
	float u=0.177;
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	printf("w=%d\n",w);
	printf("u=%f\n",u);
	printf("DBL_MAX=%le",DBL_MAX);
	printf("DBL_MIN=%le",DBL_MIN);
	
	return 0;
}
