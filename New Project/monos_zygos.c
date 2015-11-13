#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int a,p;
	printf("Dose enan arithmo: ");
	scanf("%d",&a);
	p=a/2;
	/*A tropos*/
	if(a==p*2)
	/*B tropos*/
	//if(a%2==0)
	{
		printf("Zygos\n");
	}
	else
	{
		printf("Monos\n");
	}
	return 0;
}