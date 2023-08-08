//#include<stdio.h>
//
//int main() {
//    int h, w, n, l, d, x, y, arr[100][100];
//    scanf("%d %d", &h, &w);
//
//    scanf("%d", &n);
//
//    while (n--) {
//        scanf("%d %d %d %d", &l, &d, &x, &y);
//        x--;
//        y--;
//        while (l--) {
//            if (d) {
//                arr[x][y]++;
//                x++;
//            }
//            else {
//                arr[x][y]++;
//                y++;
//            }
//        }
//    }
//
//    for (int i = 0; i < h; i++) {
//        for (int j = 0; j < w; j++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}
