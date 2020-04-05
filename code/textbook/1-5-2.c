#include<stdio.h>	

/*本程序对输入的字符个数进行计数，V1.0*/
main()
{
	long nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("The numer of characters in input is %ld\n", nc);
}