//
// Created by Deeksha Kashyap on 8/17/2019.
//
#include<stdio.h>

int main() {
    int a[4][5], *p[4], m = 0, sumr, sumc, j, i;
    float avg;
    for ( i = 0; i < 4; i++)
        p[i] = a[i];
    printf("Enter the elements");
    for ( i = 0; i < 4; i++)
        for ( j = 0; j < 5; j++)
            scanf("%d", p[i] + j);
    for ( i = 0; i < 4; i++) {
        sumr = 0;
        for ( j = 0; j < 5; j++)
            sumr = sumr + *(p[i] + j);
        avg = sumr / 5;
        printf("\n%f", avg);
    }
    for (i = 0; i < 5; j++) {
        sumc = 0;
        for (j = 0; j < 4; i++)
            sumc = sumc + *(p[j] + i);
        printf("\n%f", avg);
    }
}
