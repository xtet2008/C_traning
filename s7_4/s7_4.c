main()
{
	int i,max,a[10];
	printf("input 10 numbers:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	max=a[0];
	for(i=1;i<9;i++)
		if(a[i]>max)max=a[i];
	printf("The max number is :%d",max);
	getch();
}
