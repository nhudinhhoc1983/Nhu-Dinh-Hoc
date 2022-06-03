#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int tongsotiethoc;
	int dihocthucte;
	float dkthi;
	float lt;
	float th;
	float btl;
	printf("Ban nhap tong so tiet hoc \n");
	scanf("%d", &tongsotiethoc);
	printf("So buoi thuc te ban da hoc \n");
	scanf("%d", &dihocthucte );
	dkthi=tongsotiethoc/dihocthucte;
	if(dkthi=0.25){
		printf("diem thi ly thuyet cua ban la %\n ");
		scanf("%f%f%f",&lt,&th,&btl);
		if(lt>=8){
		printf("Ban da qua ly thuyet \n");
		}
		else
		printf("ban phai thi lai ly thuyet");
		if(th>=6)
		{
		printf("Ban da qua diem thuc hanh \n");
		}
		else
		printf("Ban phai thi lai thuc hanh \n");
		if(btl>=4){
		printf("Ban da qua bai tap lon \n");
		}
		else
		printf("Ban phai thi lai bai tap lon \n");
	}
	else
printf("Ban phai hoc lai \n");	
	return 0;
}
