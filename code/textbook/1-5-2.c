#include<stdio.h>	

/*�������������ַ��������м�����V1.0*/
main()
{
	long nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("The numer of characters in input is %ld\n", nc);
}