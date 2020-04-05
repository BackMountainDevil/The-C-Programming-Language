#include<stdio.h>	

#define LOWER 0		//温度表的下线
#define UPPER 300	//温度表的上线
#define STEP 20		//温度表的步长

main()	
{
	/*输出华氏度-摄氏度对照表*/
	int fahr;
	printf("华氏度\t摄氏度\n");
	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}