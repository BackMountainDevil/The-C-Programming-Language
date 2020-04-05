#include<stdio.h>
#define IN 1	/*表示在单词内*/
#define OUT 0	/*表示不在单词内*/

main()
{
	int c, n1, nw, nc, state;
	state = OUT;
	n1 = nw = nc = 0;
	while ((c = getchar()) != EOF) 
	{
		++nc;	//每次输入都进行计数
		if (c == '\n')	//记录行数
			++n1;

		/*//三个单词判别依据，有点少
		if (c == ' ' || c == '\n' || c == '\t') 
		{
			state = OUT;
		}
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
		*/
		/*这样还能额外筛选全数字、全汉字、汉字数字混合
			但是不能剔除英文数字混合、英文汉字混合、英文特殊符号混合输入...*/
		
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
			
		{
			state = IN;
		}	
		else if (state == IN)
		{
			state = OUT;
			++nw;
		}
		/*
		if ( c <= 'a' || c >= 'z' || c <= 'A' || c >= 'Z')
		{
			state = OUT;
		}
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}*/
	}
	printf("行数： %d\n单词数： %d\n字符数： %d\n", n1, nw, nc);
}


