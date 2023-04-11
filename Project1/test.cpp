#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "euclid.h"

void test_c()
{
	clock_t start, end;
	double result;

	start = clock(); //���۽ð�

	srand((unsigned int)time(NULL));

	int a = (rand() % 1000) + 1;
	int b = (rand() % 1000) + 1;
	//������ ��

	printf("a = %d, b = %d\n", a, b);

	printf("�ݺ��� = %d\n", eucliditeration(a, b));

	printf("����Լ� = %d\n", euclidrecursive(a, b));

	end = clock(); //����ð�

	result = (double)(end - start); //�ɸ��ð�

	printf("�ɸ��ð� = %f", result);
}