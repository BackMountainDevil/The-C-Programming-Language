#include<stdio.h>

main()
{
	/*如果当前输出的上一个输出为空格，说明这是连续的空格；
	因此要记录上一个输出*/
	int c, lc;
	while ((c = getchar()) != EOF) {
		if (c != ' ')
		{
			putchar(c);
		}	
		else if (c == ' ')
		{
			if (lc != ' ')	//如果上一个输出不为空格才进行输出
				putchar(c);
		}	
		lc = c;
	}
}


