#include<stdio.h>
main()
{
	
	int i,k,j;
	for(i=1;i<=5;i++){
		for(k=i;k<=4;k++){
			printf(" ");
		
		}
		for(j=1;j<=i;j++){
			printf("*");
		 
	}
	for(j=i-1;j>=1;j--){
			printf("*");
		}
	
	 printf("\n");
  }
}