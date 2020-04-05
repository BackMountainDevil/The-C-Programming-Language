#include<stdio.h>	
main()	
{
	/*输出华氏度0-300之间对应的摄氏度对照表
	三百个输出太多，选取合适的步长*/
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	//温度表的下限
	upper = 300;	//温度表的上限
	step = 20;	//步长

	celsius = lower;
	printf("华氏度\t摄氏度\n");
	while (celsius <= upper)
	{
		fahr = celsius * 9.0 / 5.0 + 32.0 ;
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		celsius = celsius + step;
	}
}