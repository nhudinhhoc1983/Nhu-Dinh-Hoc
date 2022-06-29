#include <stdio.h>
#include <conio.h>

int main(){

    int A[100];
    int n;
    int i;
    printf("Nhap vao so luong phan tu cua mang la: ");
    scanf("%d", &n);


    for(i=0; i<n; i++)
    {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &A[i]);
    }


    for(i=n-1; i>=0; i--)
    {
        printf("\t%d", A[i]);
    }

   getch();
   return 0;
}
