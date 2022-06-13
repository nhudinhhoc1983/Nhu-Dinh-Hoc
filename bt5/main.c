#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int counter;
	int grade;
	int total;
	int average;
	total = 0;
	counter = 1;
	while (counter <= 10){
		printf("Enter grade:");
		scanf("%d",&grade);
		total= total + grade;
		counter = counter + 1;
	}
	average = total /10;
	printf("Class average is %d\n", average);
	return 0;
}
	 
