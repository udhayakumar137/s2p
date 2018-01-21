#include <stdio.h>

int main(void) {
int n,i;
scanf("%d\n",&n);
printf("%d\n",n);

for(i=2;i<=n-1;i++)
{
	if(n%i==0)
	
{
	printf("not a prime number\n");

break;
}
}

if(i==n)


{
	printf(" a prime number");



}

	return 0;
}
