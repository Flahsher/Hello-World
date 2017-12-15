#include <stdio.h>
#include <math.h>

struct Point {
	float x;
	float y;
	float r;
	float thea;
}; 

int main(){
	int type;
	float x,y,data;
	printf("请输入点的坐标(x,y):\n");
	scanf("%f%f",&x,&y);
	struct Point p={ x , y , sqrtf(x*x+y*y) , (float)atan(y/x) };
	printf("请输入点的移动方式：\n1.左右平移  2.上下平移  3.绕原点旋转(弧度)\n");
	scanf("%d",&type);
	printf("请输入点的移动数据\n");
	scanf("%f",&data);
	switch(type){
		case 1:
			p.x+=data;
			p.r=sqrtf(p.x*p.x+p.y*p.y);
			p.thea=(float)atan(p.y/p.x);
			break;
		case 2:
			p.y+=data;
			p.r=sqrtf(p.x*p.x+p.y*p.y);
			p.thea=(float)atan(p.y/p.x);
			break;
		case 3:
			p.thea+=data;
			p.x=p.r*(float)cos(p.thea);
			p.y=p.r*(float)sin(p.thea);
			break;
	}
	printf("x=%lf\n",p.x);
	printf("y=%lf\n",p.y);
	printf("r=%lf\n",p.r);
	printf("thea=%lf\n",p.thea);
} 
