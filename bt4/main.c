#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int r;
	int kq;
	printf("%d nhap so r");
	scanf("%d", &r);
	kq = r % 2;
	if(kq==0){
	printf("%d ket qua la so chan", r);
		}
		else
		printf("%d ket qua la so le", r);	
	
}
