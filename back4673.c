//2021-09-16. 못풀었음
//1.셀프 함수 만들기. 어떤 숫자 입력 > sum이라는 변수에 합을 선언
//2.함수를 어떻게 만들것이냐? 
//3. char 33을 넣음 > 이것을 char[]로 만듬 >> 배열 안에 있는 모든 원소의 합을 구함 
//#include <stdio.h>
//int self_num();
//int main() {
//    self_num();
//    return 0;
//}
//int self_num() {
//    int i, arr[10001] = { 0 }, res = 0;
//    for (i = 1; i <= 10000; i++) {
//        if (i < 10) {
//            res = i + i;
//            arr[res] = 1;
//        }
//        else if (i < 100) {
//            res = i + (i / 10) + (i % 10);
//            arr[res] = 1;
//        }
//        else if (i < 1000) {
//            res = i + (i / 100) + ((i % 100) / 10) + ((i % 100) % 10);
//            arr[res] = 1;
//        }
//        else if (i < 10000) {
//            res = i + (i / 1000) + ((i % 1000) / 100) + (((i % 1000) % 100) / 10) + (((i % 1000) % 100) % 10);
//            if (res <= 10000)    arr[res] = 1;
//        }
//    }
//
//    for (i = 1; i <= 10000; i++) {
//        if (arr[i] != 1)
//            printf("%d\n", i);
//    }
//    return 0;
//}