#include<stdio.h>
main()
{
	int a[2][3][2]={
					{{2,4},
					 {7,8},
					 {3,4}
					},
					{{3,5},
					 {2,3},
					 {3,4}}};
				printf("\n%u",a);
				printf("\n%u",*a);
        		printf("\n%u",**a);
        		printf("\n%u",***a);
   	    		printf("\n%u",a+1);
				printf("\n%u",*a+1);
				printf("\n%u",**a+1);
				printf("\n%u",***a+1);
}