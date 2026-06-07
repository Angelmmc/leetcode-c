#include <stdio.h>
#include "medium/ProductOfArrayExceptSelf.h"

int main(void) {
    constexpr int nums[] = {1, 2, 3, 4};
    int returnSize;
    productExceptSelf(nums, sizeof(nums), &returnSize);
    return 0;
}
