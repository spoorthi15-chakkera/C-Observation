#include<stdio.h>
int main()
{
	float speed,time,distance;
	printf("enter the speed of the object:");
	scanf("%f",&speed);
	printf("enter the time taken by the object:");
	scanf("%f",&time);
	distance=speed*time;
	printf("the distance travelled by an object:%f",distance);
	return 0;
	}
