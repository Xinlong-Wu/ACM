/*
����	18.09.18.
����	����������ĸ������ascall���С�������򣬲�ʹ������ 
*/
#include<stdio.h>
int main()
{
	int a;
	char world1,world2,world3;
	while(scanf("%c%c%c",&world1,&world2,&world3) != EOF)
	{
lable:
		if (world1 > world2)
		{
			a = world1;
			world1 = world2;
			world2 = a;
		}
		if (world2 > world3)
		{
			a = world2;
			world2 = world3;
			world3 = a;
		}
		if (world1 > world3)
		{
			a = world1;
			world1 = world3;
			world3 = a;
		}
		if (world1 < world2 < world3)
		{ 
		printf ("%c %c %c",world1,world2,world3);
		} 
		else
		{
			goto lable;
		}
	 } 
	 return 0;
 } 
