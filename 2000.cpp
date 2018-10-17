/*
日期	18.09.18.
描述	输入三个字母，根据ascall码从小到大排序，不使用数组 
*/
#include<stdio.h>
int main()
{
	char word1,word2,word3,a;
	while(scanf("%c%c%c",&word1,&word2,&word3) != EOF)
	{
		getchar()		//幻影换行符
		if (word1 > word2)	//判断前两个字母大小 
		{
			a = word1;
			word1 = word2;
			word2 = a;
		}
		if (word2 > word3)	//判断后两个字母大小 
		{
			a = word2;
			word2 = word3;
			word3 = a;
		}
		if (word1 > word3)	//判断第一个和第三个字母大小 
		{
			a = word1;
			word1 = word3;
			word3 = a;
		}
		printf ("%c %c %c",word1,word2,word3);
	 } 
	return 0;
 } 
