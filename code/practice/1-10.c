#include<stdio.h>	//printf、getchar
#include<conio.h>	//getch
#pragma warning(disable : 4996)	//取消4996警告：新版本中已经抛弃getch
main()
{
	int c;

	while ((c = getch()) != EOF)	/*getch()可用一直读取输入，
									而getchar只能读取回车之后的输入流
									这个时候退格键就消失在缓冲流里了*/
	{
		if (c == '/')	//反斜杠检测
			printf("\\\\ \n");	//取消转义，\\表示一个斜杠
		else if(c == '\t')	//制表符检测
			printf("\\t \n");
		else if (c == '\b')	//回退符检测
			printf("\\b \n");
	}	

}