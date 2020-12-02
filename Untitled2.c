#include <stdio.h>
long int GiaiThua(int n)
{
	long int kq=1;
	int i;
	for (i=1;i<=n;i++)
		kq=kq*i;
	return kq;		
}	
void main()
{
	int x;
	printf("\nNhap mot so:");scanf("%d",&x);
	printf("\n%d!=%ld", x,GiaiThua(x));
}
