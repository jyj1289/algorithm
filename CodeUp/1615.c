//#include "stdio.h"
//#include "stdbool.h"
//
//bool arr[5001];
//
//int self(int n) {
//    int sum = n;
//    while (1) {
//        if (n == 0) { break; }
//        sum += n % 10;
//        n = n / 10;
//    }
//    return sum;
//}
//
//int main() {
//
//    int i, j;
//    scanf("%d %d", &i, &j);
//
//    for (int k = 1; k <= 5000; k++) {
//        int index = self(k);
//        if (index <= j) {
//            arr[index] = true;
//        }
//    }
//    int result = 0;
//    for (int k = i; k <= j; k++) {
//        if (!arr[k]) {
//            result += k;
//
//        }
//
//    }
//    printf("%d", result);
//}
