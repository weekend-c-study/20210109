#include<stdio.h>
int main() 
{
	//dataType varName;
	///ch = 10;
	char ch;
	ch = 128;
	ch = 129;
	const double PI = 3.141592;
	//pi = 3.14;

	printf("%d\n", ch);//10����
	//printf("%o\n", ch);//8���� ǥ��
	//printf("%x\n", ch);//16���� ǥ��

	return 0;
}


/*
#include<stdio.h>

//�������� : default �ʱ�ȭ 0
int num1;

int main() {
	//�������� local variable
	int num=100;
	int a, b, c;

	printf("10\n");
	printf("num: %d\n", num);
	printf("num1: %d\n", num1);
	
	return 0;
}
void disp() {
	int num=0;
}
//*/

/*
#include<stdio.h>
int main()
{
	printf("char������: %d\n", sizeof(char));
	printf("short������: %d\n", sizeof(short));
	printf("int������: %d\n", sizeof(int) );
	printf("long������: %d\n", sizeof(long));
	printf("long long������: %d\n", sizeof(long long));
	
	return 0;
}
//*/
