#include<stdio.h>
#define IN 1	/*��ʾ�ڵ�����*/
#define OUT 0	/*��ʾ���ڵ�����*/

main()
{
	int c, n1, nw, nc, state;
	state = OUT;
	n1 = nw = nc = 0;
	while ((c = getchar()) != EOF) 
	{
		++nc;	//ÿ�����붼���м���
		if (c == '\n')	//��¼����
			++n1;

		/*//���������б����ݣ��е���
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
		/*�������ܶ���ɸѡȫ���֡�ȫ���֡��������ֻ��
			���ǲ����޳�Ӣ�����ֻ�ϡ�Ӣ�ĺ��ֻ�ϡ�Ӣ��������Ż������...*/
		
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
	printf("������ %d\n�������� %d\n�ַ����� %d\n", n1, nw, nc);
}


