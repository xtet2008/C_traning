void nzp(int a[],int n)
{
	int i;
	printf("\n values of array a are:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]<0) a[i]=0;
		printf("%d ",a[i]);
	}
}

main() 
{
	int b[5],i;

	printf("\n input 5 numbers:\n");
	for(i=0;i<5;i++)
		scanf("%d",&b[i]);
	printf("initial values of array b are:\n");
	for(i=0;i<5;i++)
		printf("%d ",b[i]);

	nzp(b,5);
	printf("\n last values of array b are:\n");
	for(i=0;i<5;i++)
		printf("%d ",b[i]);

	getch();
}
