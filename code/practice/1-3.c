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

	fahr = lower;
	printf("���϶�\t���϶�\n");
	while (fahr <= upper)
	{
		celsius = 5.0 * (fahr - 32.0) / 9.0;
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	
}