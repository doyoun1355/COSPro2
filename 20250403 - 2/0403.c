#include <stdio.h>
#include <math.h>

void main()
{
	float a, b;
	int r;
	float theta, c;

	printf("x값을 입력해주세요 ==>");
		scanf_s("%f", &a);

	printf("y값을 입력해주세요 ==>");
		scanf_s("%f", &b);

		printf("(x,y) = (%.0f,%.0f) \n", a, b);
		r =sqrt(a*a + b*b);
		printf("%d \n", r);

		c = b / a;

		theta = atan(c);
		printf("theta = %f", theta);
}