#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int minidex(int a[], int n)
{int min;
min=a[0];
 int i;
 int index=0;
 for(i=0; i<n;i++)
{
	 if(a[i]<min)
		 {
		  min=a[i];
		  index=i;
		 }
	}
	return index;
}
int maxidex(int a[], int n)
{int max;
max=a[0];
 int i;
 int index=0;
 for(i=0; i<n;i++)
{
	 if(a[i]>max)
		 {
		  max=a[i];
		  index=i;
		 }
	}
	return index;
}
void nhap(int a[], int n)
{
int i;
for(i=0;i<n;i++)
{
printf("Nhap a[%d]",i);
scanf("%d",&a[i]);
}
}
int sumarr(int a[], int n)
{
	int kq=0;
	int i;
	for ( i=0;i<6;i++)
	{
		kq= kq+ a[i];
	}
	return kq;	
}
float tb(int a[], int n)
{
	int kq=0;
	float giatri;
	int i;
	for ( i=0;i<n;i++)
	{
		kq= kq+ a[i];
	}
	giatri=(float)kq/i;
	return giatri;	
}
int main() {
	float a[100];
	int n;
	printf("nhap n");
	scanf("%d",&n);
	nhap(a,n);
	printf("Gia tri nho nhat=%d",minidex(a,n));
	printf("\nGia tri lon nhat=%d",maxidex(a,n));
	printf("\nTong=%d",sumarr(a,n));
	printf("\nGia tri trung binh=%f",tb(a,n));
	return 0;
}


