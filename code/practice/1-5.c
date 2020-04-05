#include<stdio.h>	
main()	
{
	/*输出华氏度-摄氏度对照表*/
	int fahr;
	printf("华氏度\t摄氏度\n");
	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}