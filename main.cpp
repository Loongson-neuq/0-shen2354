#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result& result) {
    int temp;

    // 找出最大值
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    // 找出最小值
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // 此时a是最小值，b是中间值，c是最大值
    result.min = a;
    result.mid = b;
    result.max = c;
}