#include ".assignment/test.h"
// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, struct Result *result) {
    int min, mid, max;

    // 临时变量，用于交换
    int temp;

    // 初始化最小值、中间值和最大值为第一个数
    min = mid = max = a;
    
    if (b < min) {
        mid = min;
        min = b;
    } else if (b > min && b < mid) {
        mid = b;
    }

    if (c < min) {
        mid = min;
        min = c;
    } else if (c > min && c < mid) {
        mid = c;
    } else if (c > mid) {
        max = mid;
        mid = c;
    }
    result->min = min;
    result->mid = mid;
    result->max = max;
}