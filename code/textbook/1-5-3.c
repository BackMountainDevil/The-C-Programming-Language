#include<stdio.h>	

main()
{
	/*将输入打印出来，V1.0*/
	int c,n1;

	n1 = 0;
	while ((c = getchar()) != EOF)	//当输入的字符不是文件结束指示符时执行循环
		if (c == '\n')
			++n1;
	printf("The lines of this is %d", n1);
}