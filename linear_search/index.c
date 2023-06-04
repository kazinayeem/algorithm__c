//
// Created by Nayeem on 6/4/2023.
//

#include "stdio.h"

int linear_search(int A[], int n, int x) {
    int i;

    for (i = 0; i < n; ++i) {
        if (A[i] == x) {
            return i;
        }
    }
    i = -1;
    return i;
}

int main() {
    int item[] = {1, 2, 3, 4, 5};
    int len = sizeof(item) / sizeof(item[0]);
    printf("lenght : %d \n", len);
    int lenght = 5;
    int search_item = 1;
    int result = linear_search(item, lenght, search_item);
    if(result == -1){
        printf("search item not found");
    }else{
        printf("result : %d", result);
    }

    return 0;

}