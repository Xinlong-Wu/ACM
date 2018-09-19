/*
#include<stdio.h>
int main()
{
	int start;
	int end;
	int a;
	int total = 0;
	scanf("%d",&start);
	a = start;
	scanf("%d",&end);
xunhuan:
	if(a <= end)
	{
	total = total + a;
	a = ++a;
	goto xunhuan;
	}
	printf("%d\n",start);
	printf("%d",total);
	return 0;
}
*/
#include<stdio.h>
int main()
{
	int start;
	int end;
	int a;
	int total = 0;
	scanf("%d",&start);
	scanf("%d",&end);
	for(a = start;a <= end;++a)
	{
		total = total + a;
	}
	printf("%d\n",start);
	printf("%d",total);
	return 0;
}
