#include <stdio.h>

#include <math.h>
void main()
{
	int a, b;
	float x, y, pi;

	pi = 3.14;

	printf("극좌표의 r값을 입력해주세요 ==>");
	scanf_s("%d", &a);

	printf("극좌표의 세타 값을 입력해주세요 ==>");
	scanf_s("%d", &b);

	printf("(r,theta) = (%d,%d) \n", a, b);
	x = a * cos(b * pi / 180);
	y = a * sin(b * pi / 180);

	printf("(x,y) = (%.2f,%.2f)", x, y);
}
