#include<stdio.h>

main()
{
	int c, n, i;
	int arr[100] = { 0 };//保存第一个到第一百个单词的长度
	i = n = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')//空格\换行、Tab则保存单词的长度
		{
			arr[i] = n;	//保存单词长度
			n = 0;
			i++;
			//putchar('\n');
		}
		else
		{
			n++;
			//putchar(c); //输出识别出的单词
		}
	}

	for (int j = 0; j < i; j++)

	{
		for (int k = 0; k < arr[j]; k++)
		{
			printf("|");
		}
		printf("\n");
	}	
}