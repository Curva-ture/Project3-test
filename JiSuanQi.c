#include<stdio.h>
int main() 
{
	float a, b;
	char op, or ;
	do 
	{
		scanf_s("%f %c %f", &a, &op, &b);
		switch (op) {
		case'+':
			printf("%.2f + %.2f = %.2f\n", a, b, a + b);
			break;
		case'-':
			printf("%.2f - %.2f = %.2f\n", a, b, a - b);
			break;
		case'*':
			printf("%.2f * %.2f = %.2f\n", a, b, a * b);
			break;
		case'/':
			if (b != 0) {
				printf("%.2f / %.2f = %.2f\n", a, b, a / b);
			}
			else {
				printf("error\n");
			}
			break;
		default:
			printf("error\n");
			break;
		}
		scanf(" %c", &or );
	} while (or=='y');
	return 0;
}