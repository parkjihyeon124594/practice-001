//2021-09-23-C언어
//백준 11720번
//문제:N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//새로 배운 점:
//1.이는 수를 입력 받을 때 공백 문자나 띄어쓰기 없이 입력을 받도록 하기 위해선 int형이 아닌 char형으로 받아야 한다.
//2.
int main()
{
	//잘못푼 풀이: 이는 수를 입력 받을 때 공백 문자나 띄어쓰기 없이 입력을 받지 못함 
	/*int x;
	int sum = 0;
	scanf("%d", &x);
	for (int i = 0; i < x; i++)
	{
		int num;
		scanf("%d", &num);
		sum = sum + num;
	}
	printf("%d", sum);*/


	int n, sum = 0;
	scanf("%d", &n);    //숫자의 개수 입력
	int a[100] = { 0 };

	for (int i = 0; i < n; i++) {
		// "%1d"를 사용= 공백 없이 붙어 있어도 한 번에 한 개씩 입력받을 수 있다.
		scanf("%1d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}

	printf("%d", sum);
	return 0;
}





	