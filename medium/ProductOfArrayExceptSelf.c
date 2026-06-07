#include <stdio.h>
#include "ProductOfArrayExceptSelf.h"

int *productExceptSelf(const int *nums, int numsSize, int *returnSize) {
    int prefix[numsSize];
    prefix[0] = nums[0];

    for (int i = 1; i < numsSize; i++) {
        prefix[i] = prefix[i - 1] * nums[i];
    }

    int sufix[numsSize];
    sufix[numsSize - 1] = nums[numsSize - 1];

    for (int i = numsSize - 2; i >= 0; i--) {
        sufix[i] = sufix[i + 1] * nums[i];
    }

    printf("hola");
    return nullptr;
}
