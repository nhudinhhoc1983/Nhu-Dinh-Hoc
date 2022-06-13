#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
char ch;
int i;
float f;
double d, result;
	printf("Ban nhap ky tu ch");
	scanf("%c",&ch); fflush(stdin);
	printf("nhap so i");
	scanf("%d", &i);
	printf("nhap so f");
	scanf("%f",&f);
	printf("Nhap so d");
	scanf("%lf",&d);
	result=(ch/i)+(f*i)-(f-i);
printf("ket qua la %lf",result);
return 0;
}
