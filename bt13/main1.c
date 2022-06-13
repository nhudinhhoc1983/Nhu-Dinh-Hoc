#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int min, max, i;
	printf("Nhap so min");
	scanf("%d", &min);
	printf("Nhap so max");
	scanf("%d", &max);
	for(i=min; i<=max; i++)
	{if(i%7==0)
	printf("%d\n",i);
	}
	
	
	return 0;
}
