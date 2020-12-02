#include <stdio.h>
int UCLN(int a, int b)
{
	while (a!=b)
	{
		if (a>b) a=a-b;
		else b=b-a;
	}
	return a;
}	
int BCNN(int a, int b)	
{
	return a*b/UCLN(a,b);
}
void main()
{
	int x,y;
	printf("\nNhap 2 so:");scanf("%d%d",&x,&y);
	printf("\nUCLN cua %d va %d la %d", x,y,UCLN(x,y));
	printf("\nBCNN cua %d va %d la %d", x,y,BCNN(x,y));
}
