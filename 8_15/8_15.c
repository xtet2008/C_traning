//百钱买百鸡代码优化示例
//公鸡单价为5钱，母鸡单价为3钱，小鸡3只价格为1钱。

#include<stdio.h>

int main()
{
	int x,y,z;

	for(x=0;x<=20;x++)
	{
		for(y=0;y<=33;y++)
		{
			z=100-x-y;
			if(z%3==0 && x*5+y*3+z/3==100)
				printf("公鸡：%d,母鸡：%d,小鸡：%d\n",x,y,z);
		}
	}
	getch();
	return 0;
}