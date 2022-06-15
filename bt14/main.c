#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int cardid,pin,menu;
	printf("Ban nhap mat khau truy cap");
	scanf("%d",&cardid);
	printf("Ban nhap ma pin");
	scanf("%d",&pin);
	scanf("%d",&menu);	
	if(cardid==123 && pin==456)
{

	switch(menu)
	{
	case 1:
		printf("Rut tien\n");
		break;
	case 2:
		printf("Chuyen khoan\n");
		break;
	case 3:
		printf("Xem so du\n");
		break;
	case 4:
		printf("Ket thuc\n");
		break;
	}
}
	else
	printf("Ban da nhap sai mat khau");
	
	
	
	return 0;
}
