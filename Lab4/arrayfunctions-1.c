// CS 271 - Lab 4
// Program name: arrayfunctions.c
// Thinh Le
// Feb 23, 2020

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void fillInteger(int a[], int length, int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < length; i++)
        a[i] = rand() % (max - min + 1) + min;
}

void fillCharacter(char c[], int length, char start, char end) {
    srand(time(NULL));
    for (int i = 0; i < length; i++)
        c[i] = rand() % (end - start + 1) + start;
}

void findConsecutive(int array[], int length) {
    for (int i = 0; i < length - 1; i++)
        if (abs(array[i] - array[i+1]) == 1)
            printf("Elements [%d] and [%d] are consecutive.\n", i, i+1);
}

void findTriples (char c[], int length) {
    for (int i = 0; i < length - 2; i++)
        if (c[i] + 1 == c[i+1] && c[i] + 2 == c[i+2])
            printf("%c%c%c\n", c[i], c[i+1], c[i+2]);
}

void findWords (char *c[], int length, char letter) {
    char *s;
    for (int i = 0; i < length; i++) {
        s = strchr(c[i], letter);
        if (s != NULL)
            printf("%s\n", c[i]);
    }
}

void fillFloat (float a[], int length, float min, float max) {
    srand(time(NULL));
    int minInt = (int)min;
    int maxInt = (int)max;
    for (int i = 0; i < length; i++)
        a[i] = (rand() % (maxInt - minInt + 1) + minInt);
}

float floatMean (float array[], int length) {
    float sum = 0.0;
    for (int i = 0; i < length; i++)
        sum += array[i];
    return sum / length;
}

float floatMin (float array[], int length) {
    float min = array[0];
    for (int i = 0; i < length; i++)
        if (min > array[i])
            min = array[i];
    return min;
}

float floatMax (float array[], int length) {
    float max = array[0];
    for (int i = 0; i < length; i++)
        if (max < array[i])
            max = array[i];
    return max;
}
