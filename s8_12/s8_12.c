main()
{
	int i=2,j=3,k;
	k=i+j;
	{
		int k=8;
		printf("k=%d\n",k);
	}
	printf("i=%d k=%d\n",i,k);
	getch();
}

/*
本程序在main中定义了i,j,k三个变量，其中k未赋初值。而在复合语句内又定义了一个变量k，并赋初值为8。应该注意这两个k不是同
一个变量。在复合语句外由main定义的k起作用，而在复合语句内则由在复合语句内定义的k起作用。因此程序第4行的k为main所定义，
其值应为5。第7行输出k值，该行在复合语句内，由复合语句内定义的k起作用，其初值为8，故输出值为8，第9行输出i，k值。i是在整
个程序中有效的，第7行对i赋值为3，故以输出也为3。而第9行已在复合语句之外，输出的k应为main所定义的k，此k值由第4 行已获得
为5，故输出也为5。
*/