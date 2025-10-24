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

#include <stdio.h>
#include <stdlib.h>

// Функция сравнения для qsort - сортировка по началу интервала
int compare(const void* a, const void* b) {
    int* interval1 = (int*)a;
    int* interval2 = (int*)b;
    return interval1[0] - interval2[0];
}
int* merge(int* intervals, int intervalsSize, int* returnSize) {
    if (intervalsSize == 0) {
        *returnSize = 0;
        return NULL;
    }
    
    // Создаем массив для удобной работы с интервалами
    int** intervalsArr = (int**)malloc(intervalsSize * sizeof(int*));
    for (int i = 0; i < intervalsSize; i++) {
        intervalsArr[i] = &intervals[i * 2];
    }
    
    // Сортируем интервалы по началу
    qsort(intervalsArr, intervalsSize, sizeof(int*), compare);
    
    // Временный массив для результата
    int** result = (int**)malloc(intervalsSize * sizeof(int*));
    int resultSize = 0;
    
    // Добавляем первый интервал
    result[resultSize] = (int*)malloc(2 * sizeof(int));
    result[resultSize][0] = intervalsArr[0][0];
    result[resultSize][1] = intervalsArr[0][1];
    resultSize++;
    
    // Объединяем интервалы
    for (int i = 1; i < intervalsSize; i++) {
        int* current = intervalsArr[i];
        int* last = result[resultSize - 1];
        
        // Если текущий интервал пересекается с последним в результате
        if (current[0] <= last[1]) {
            // Объединяем интервалы
            if (current[1] > last[1]) {
                last[1] = current[1];
            }
        } else {
            // Добавляем новый интервал в результат
            result[resultSize] = (int*)malloc(2 * sizeof(int));
            result[resultSize][0] = current[0];
            result[resultSize][1] = current[1];
            resultSize++;
        }
    }
    
    // Преобразуем результат в одномерный массив
    int* flatResult = (int*)malloc(resultSize * 2 * sizeof(int));
    for (int i = 0; i < resultSize; i++) {
        flatResult[i * 2] = result[i][0];
        flatResult[i * 2 + 1] = result[i][1];
        free(result[i]);
    }
    
    free(result);
    free(intervalsArr);
    
    *returnSize = resultSize * 2;
    return flatResult;
}
