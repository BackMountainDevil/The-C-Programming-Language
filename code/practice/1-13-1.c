#include<stdio.h>

main()
{
	int c, n, i;
	int arr[100] = { 0 };//�����һ������һ�ٸ����ʵĳ���
	i = n = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')//�ո�\���С�Tab�򱣴浥�ʵĳ���
		{
			arr[i] = n;	//���浥�ʳ���
			n = 0;
			i++;
			//putchar('\n');
		}
		else
		{
			n++;
			//putchar(c); //���ʶ����ĵ���
		}
	}

	for (int j = 0; j < i; j++)

	{
		for (int k = 0; k < arr[j]; k++)
		{
			printf("|");
		}
		printf("\n");
	}	
}