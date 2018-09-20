/*
日期	18.09.18.
描述	输入三个字母，根据ascall码从小到大排序，不使用数组 
*/
#include<stdio.h>
int main()
{
	int a;
	char world1,world2,world3;
	while(scanf("%c %c %c",&world1,&world2,&world3) != EOF)
	{
lable:
		if (world1 > world2)	//判断前两个字母大小 
		{
			a = world1;
			world1 = world2;
			world2 = a;
		}
		if (world2 > world3)	//判断后两个字母大小 
		{
			a = world2;
			world2 = world3;
			world3 = a;
		}
		if (world1 > world3)	//判断第一个和第三个字母大小 
		{
			a = world1;
			world1 = world3;
			world3 = a;
		}
		if (world1 < world2 && world2 < world3)		//判断整体三个字母大小顺序 
		{ 
		printf ("%c %c %c",world1,world2,world3);
		} 
		else
		{
			goto lable;
		}
		return 0;
	 } 
 } 
