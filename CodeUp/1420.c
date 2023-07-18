//#include<stdio.h>
//
//int main() {
//    int n, score[50], rank[50];
//    char name[50][20];
//
//    for (int i = 0; i < 50; i++) {
//        rank[i] = 1;
//    }
//
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        scanf("%s %d", name[i], &score[i]);
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (score[i] < score[j]) {
//                rank[i]++;
//            }
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (rank[i] == 3) {
//            printf("%s", name[i]);
//        }
//    }
//
//    return 0;
//}
