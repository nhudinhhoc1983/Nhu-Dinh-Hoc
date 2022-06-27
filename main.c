#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ktsdu ()
{
int tientk;
tientk=100000;
return tientk;
}
int login(int a, int b)
{
bool value;
if(a==123 && b==456)	
	value=true;
	return value;
}
int ruttien()
{
int stcr,st;
printf("Moi ban nhap so tien can rut\n");
scanf("%d",&stcr);
st=ktsdu();
if(stcr>st+1)
{
printf("So tien rut lon hon so tien hien co\n\t vui long thuc hien lai\n")	;
}
else
{printf("Ban rut thanh cong so tien%d VND\n",stcr);
}
return 0;
}
int chuyenkhoan()
{int stk,stchuyen,st,sdu;
st=ktsdu();
printf("Moi ban nhap stk ngan hang can chuyen \n");
scanf("%d",&stk);
printf("So tien can chuyen \n");
scanf("%d",&stchuyen);
if(stchuyen>st)
{
printf("So tien chuyen lon hon so tien hien co Vui long thuc hien lai");
}
else
{
printf("\n Ban chuyen thanh cong so tien\t %d \tVND cho stk %d",stchuyen,stk);
}

}
int sodu()
{
int st,sdu;
st=ktsdu();
printf("So du trong tai khoan cua ban la: %d VND\n",st)	;
}
int main(int argc, char *argv[]) {
int id,mk,tien,stk,gt;
char lap;

do{
printf("\nChao mung ban, moi ban nhap the")	;
scanf("%d",&id);
printf("Moi ban nhap mat khau:\n");
scanf("%d",&mk);
if(login(id,mk)==1)
{
printf("\n\t Ban da dang nhap thanh cong\n")	;
do{
printf("\t1. Rut tien\t")	;
printf("\t2. Chuyen khoan\n");
printf("\t3. Xem so du\t");
printf("\t Moi ban chon:");
fflush(stdin);
scanf("%d",&gt);
switch(gt)
{
case 1:
ruttien();
break;	
case 2:
chuyenkhoan()	;
	break;
case 3:
	sodu();
	break;
case 4:
	break;
}
printf("\n chon y de tiep tuc:\n");
fflush(stdin);
scanf("%c",&lap);	
}
while(lap=='y'|| lap=='Y');
}
else
{
	printf("\n Sai mat khau, moi ban nhap lai\n");
	}
	}
while(login(id,mk)==0);
	return 0;
	}

