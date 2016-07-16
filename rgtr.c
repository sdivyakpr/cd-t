#include <stdio.h>
int main(void) {
	int a,i;
	 scanf("%d",&a);
	for(i=1;i<=a;i=i*2)
			{
			  if(i==a)
				{
					printf("%d is the power of 2",a);
					break;
				}
			}
			if(i!=a)
			  printf("%d is not the power of 2",a);
				return 0;
}
