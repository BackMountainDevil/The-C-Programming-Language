#include<stdio.h>	

main()
{
	int eof;
	eof = getchar() != EOF;
	printf("%d", eof);
}