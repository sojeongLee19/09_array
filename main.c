#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{ 
    int i;
    int grade[5]; 
    printf("5명의 점수를 입력하세요. \n"); 
     
	for(i=0; i<5; i++)
	 scanf("%d", &grade[i]); 

     for( i=0; i<5; i++) 
     printf("grade[%d] = %d\n", i, grade[i]); 
     
     
     return 0;
}
