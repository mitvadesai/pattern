#include<stdio.h>
main()
{
	
	int i,k,j;
	for(i=5;i>=1;i--){
		for(k=i;k>1;k--){
			printf("  ");
		
		}
		for(j=5;j>=i;j--){
			printf("%d ",i);
		}
		printf("\n");
	}
	
	
}