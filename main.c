#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("input a integer : ");
	scanf("%d", &a);
	
	if(a>=0)
	{
		printf("������ %d�Դϴ�.", a);	
	} 
	else
	{
		printf("������ %d�Դϴ�.", -a);
	}
	
	return 0;
}
