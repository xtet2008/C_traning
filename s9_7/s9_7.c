#define SQ(y) (y)*(y)
main(){
	int a ,sq;
	printf("input a number:");
	scanf("%d",&a);
	sq=160/SQ(a+1);
	printf("sq=%d",sq);
	getch();
}

/*
���б�����������ֵ��Ϊ3ʱ��ϣ�����Ϊ10����ʵ�����еĽ�����£�
input a number:3
sq=160

Ϊʲô��������Ľ����?�����������䣬�ں����֮���Ϊ��
    sq=160/(a+1)*(a+1);
aΪ3ʱ�����ڡ�/���͡�*����������ȼ��ͽ������ͬ��������160/(3+1)��40��
����40*(3+1)����160��Ϊ�˵õ���ȷ��Ӧ�ں궨���е������ַ����������
*/
