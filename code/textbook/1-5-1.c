#include<stdio.h>	

main()
{
	/*�������ӡ������V1.0*/
	int c;

	c = getchar();
	while (c != EOF)	//��������ַ������ļ�����ָʾ��ʱִ��ѭ��
	{
		putchar(c);	//����ն�����ַ�
		c = getchar();	//��ȡ��һ���ַ�
	}
}