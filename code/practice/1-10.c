#include<stdio.h>	//printf��getchar
#include<conio.h>	//getch
#pragma warning(disable : 4996)	//ȡ��4996���棺�°汾���Ѿ�����getch
main()
{
	int c;

	while ((c = getch()) != EOF)	/*getch()����һֱ��ȡ���룬
									��getcharֻ�ܶ�ȡ�س�֮���������
									���ʱ���˸������ʧ�ڻ���������*/
	{
		if (c == '/')	//��б�ܼ��
			printf("\\\\ \n");	//ȡ��ת�壬\\��ʾһ��б��
		else if(c == '\t')	//�Ʊ�����
			printf("\\t \n");
		else if (c == '\b')	//���˷����
			printf("\\b \n");
	}	

}