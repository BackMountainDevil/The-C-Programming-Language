#include<stdio.h>	
main()	
{
	/*������϶�0-300֮���Ӧ�����϶ȶ��ձ�
	���ٸ����̫�࣬ѡȡ���ʵĲ���*/
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	//�¶ȱ������
	upper = 300;	//�¶ȱ������
	step = 20;	//����

	celsius = lower;
	printf("���϶�\t���϶�\n");
	while (celsius <= upper)
	{
		fahr = celsius * 9.0 / 5.0 + 32.0 ;
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		celsius = celsius + step;
	}
}