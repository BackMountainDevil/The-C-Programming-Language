#include<stdio.h>

main()
{
	/*�����ǰ�������һ�����Ϊ�ո�˵�����������Ŀո�
	���Ҫ��¼��һ�����*/
	int c, lc;
	while ((c = getchar()) != EOF) {
		if (c != ' ')
		{
			putchar(c);
		}	
		else if (c == ' ')
		{
			if (lc != ' ')	//�����һ�������Ϊ�ո�Ž������
				putchar(c);
		}	
		lc = c;
	}
}


