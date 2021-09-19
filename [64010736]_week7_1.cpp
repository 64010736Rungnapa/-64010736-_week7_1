#include<stdio.h>
#include<conio.h>
main()
{
	int i,min,max,n;
	min = 99999999999,max = 0;
	for(i=1 ; i<=10 ; i++){
		printf("enter Number %d : ",i);
		scanf("%d",&n);
		
		if(n > max){
			max = n;
		}
	    if(n < min){
			min = n;

		}

	
	}
	printf("\n");
	printf("Max : %d\n",max);
	printf("Min : %d\n",min);

	getch();

}
