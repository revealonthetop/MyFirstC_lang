#include <stdio.h>

int main() 
{
	int sum = 0;
	double avg = 0;
	int array[] = {1,2,3,4,5,6,7,8,9,0};

	/*for (int i = 0; i < 5; i++) {
		printf_s("정수를 입력하세요 : \n");
		scanf_s("%d", & array[i]);
	}*/

	for (int i = 0; i < 10; i++) {
		sum += array[i];
	}
	avg = sum / 5;

	printf_s("배열 요소의 출력 : %d %d %d %d %d \n", array[0], array[1], array[2], array[3], array[4]);
	printf_s("총합 :  %d , 평균값: %f.2\n", sum, avg);

	return 0;
}