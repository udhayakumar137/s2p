#include <stdio.h>

int main(void) {
int r=0,a,n,d,f;
scanf("%d\n",&n);
f=n;
printf("%d\n",n);
while(n>0)
{
a=n%10;
d=a;
r=r*10+d;
n=n/10;


}
printf("%d\n",r);

if(f==r)
{
	printf("pallindrome");
}
else
{
	printf("not a pallindrome");
}
	return 0;
}
