#include<stdio.h>
#include<math.h>

#define pi 3.1416
int main ()
{	
	int i;
	printf("x,sinx,cosx\n");
	
	for(i=-360;i<=360;i++)
	{
	
	double x=sin(pi*i/180);
	double y=cos(pi*i/180);
	printf("%d, %g, %g\n",i,x,y);
	
	
	
	}
	


	return 0;
}

