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

		if (c == ' ' || c == '\n' || c == '\t') //���������б����ݣ��е��١���
		{
			state = OUT;
		}	
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("������ %d\n�������� %d\n�ַ����� %d\n", n1, nw, nc);
}


