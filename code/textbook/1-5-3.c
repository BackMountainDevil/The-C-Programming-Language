#include<stdio.h>	

main()
{
	/*�������ӡ������V1.0*/
	int c,n1;

	n1 = 0;
	while ((c = getchar()) != EOF)	//��������ַ������ļ�����ָʾ��ʱִ��ѭ��
		if (c == '\n')
			++n1;
	printf("The lines of this is %d", n1);
}