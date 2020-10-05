#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b;
	char x;
	
	printf("enter the calculation : ");
	scanf("%d %c %d", &a, &x, &b);
	
	switch(x)
	{
		case 43:
			printf("the result is %d", a+b);
			break;
			
		case 45:
			printf("the result is %d", a-b);
			break;
			
		case 42:
			printf("the result is %d", a*b);
			break;
			
		case 47:
			printf("the result is %d", a/b);
			break;
			
	}
	
	return 0;
}
