#include "../include/advanced_array_function.h"
#include <stdlib.h>
#include <stdio.h>
int max_subarray_sum(int* nums, int size) {
    int max = 0;
    int Flag = 1;
    int cnt;
    int min = 0;
    for (int len = 1; len != size; len++){
        int podmas[len];
        for (int startpos = 0; startpos < size - len; startpos++) {
            int tmax = 0;
            int tmin = -999999;
            cnt = 0;
            for (int tlen = 0; tlen <= len; tlen++){
                podmas[tlen] = nums[startpos + tlen];
            }
            for (int x = 0; x <= len; x++) {
                if ( nums[x] < 0){
                    cnt++;
                }
            if (cnt == size) {
                Flag = 0;
            } else {
                Flag = 1;
            }
            }
            if (Flag == 1) {
                for (int ind = 0; ind <= len; ind++) {
                    tmax += podmas[ind];
                }
                if (tmax > max){
                    max = tmax;
                }
            } else { 
                for (int j = 0; j <= len; j++) {
                    if (podmas[j] > tmin) {
                        tmin = podmas[j];
                    }
                }
                min = tmin;
            }
        }
    }
    if (Flag == 1){
        return max;
    } else {
        return min;
    }
}

int length_of_lis(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }
    
    int max_length = 1; 
    int current_length = 1;  
    
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > nums[i - 1]) {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
            }

            current_length = 1;
        }
    }
    

    if (current_length > max_length) {
        max_length = current_length;
    }
    
    return max_length;
}

int* merge(int* intervals, int intervalsSize, int* returnSize) {
    return 0;
}
