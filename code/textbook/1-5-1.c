#include<stdio.h>	

main()
{
	/*将输入打印出来，V1.0*/
	int c;

	c = getchar();
	while (c != EOF)	//当输入的字符不是文件结束指示符时执行循环
	{
		putchar(c);	//输出刚读入的字符
		c = getchar();	//读取下一个字符
	}
}