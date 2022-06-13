#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1;
	int num2;
printf("Enter two integers, and I will tell you \n");
scanf("%d",&num1);
printf("the relationships they satisfy:");
scanf("%d",&num2);
if(num1==num2)
{printf("%d ket qa bang %d\n",num1, num2);
}
if(num1 !=num2)
{printf("%d ket khac  %d\n",num1, num2);
}
if(num1 < num2)
{printf("%d so lon hon %d\n",num1, num2);
}
			
	return 0;
}
