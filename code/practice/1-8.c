#include<stdio.h>	

main()
{
	int c,n1,n2,n3;
	n1 = 0;
	n2 = 0;
	n3 = 0;
	while ((c = getchar()) != EOF)	//当输入的字符不是文件结束指示符时执行循环
	{
		if (c == '\n')
			++n1;
		else if(c == '	')
			++n2;
		else if (c == ' ')
			++n3;
	}	
	printf("The space of this is %d\n", n3);
	printf("The Tab of this is %d\n", n2);
	printf("The lines of this is %d\n", n1);
}