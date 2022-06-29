#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  int a,b;
void nhap()
{
  printf("\n Nhap so thu 1:");
        scanf("%d", &a);
        printf("\nNhap so thu 2:");
        scanf("%d", &b);
}
int tinhtong(int a, int b)
{
  return a+b;
}
int nhan(int a, int b)
{
  return a*b;
}
int chia(int a, int b)
{
  return a/b;
}
int tru(int a, int b)
{
  return a-b;
}
int main() 
{
  int gt;
  char lap;


    printf("\n\tBan da dang nhap thanh cong chuong trinh may tinh\n\n");
    do{    
    printf("\n1. Nhap so dau vao");
    printf("\n2. Tinh tong");
    printf("\n3. Tinh phep tru");
    printf("\n4. Tinh phep nhan");
    printf("\n5. Tinh phep chia");
    printf("\n6. Thoat");
    printf("\n moi ban chon:");
    fflush(stdin);
      scanf("%d",&gt);
      if(gt<1||gt>6)
      {
          printf("\nNhap sai, moi ban nhap lai:\n");
      }
      switch(gt)
      {
      case 1:
        nhap();
          break;
      case 2:
          printf("tong la %d: \n",tinhtong(a,b));
          break;
      case 3:
        printf("hieu la %d: \n",tru(a,b));
        break;
      case 4:
        printf("tich la %d: \n",nhan(a,b));
        break;
      case 5:
        printf("ket qua chia la %d: \n",chia(a,b));
        break;
      case 6:
          break;
    }
    printf("\n chon y de tiep tuc:\n");
    fflush(stdin); 
    scanf("%c", &lap);
  }
  while(lap=='y');
  {
  }
  return 0;
  }
