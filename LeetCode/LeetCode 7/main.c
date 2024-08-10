#include <stdio.h>
#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* answer = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    // Initialize answer with 1s
    for (int i = 0; i < numsSize; i++) {
        answer[i] = 1;
    }

    // Calculate left products
    int left_product = 1;
    for (int i = 0; i < numsSize; i++) {
        answer[i] *= left_product;
        left_product *= nums[i];
    }

    // Calculate right products
    int right_product = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= right_product;
        right_product *= nums[i];
    }

    return answer;
}
