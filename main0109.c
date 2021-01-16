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

	printf("%d\n", ch);//10진수
	//printf("%o\n", ch);//8진수 표현
	//printf("%x\n", ch);//16진수 표현

	return 0;
}


/*
#include<stdio.h>

//전역변수 : default 초기화 0
int num1;

int main() {
	//지역변수 local variable
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
	printf("char사이즈: %d\n", sizeof(char));
	printf("short사이즈: %d\n", sizeof(short));
	printf("int사이즈: %d\n", sizeof(int) );
	printf("long사이즈: %d\n", sizeof(long));
	printf("long long사이즈: %d\n", sizeof(long long));
	
	return 0;
}
//*/
