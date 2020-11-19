/*
Файл: Lab5LF14.cpp
Лабораторная работа № 5
Автор: Маюрніков.І.Д.
Задание:  LF14
Дата создания: 19.11.2020
*/
/*
hint: bubble
*/
#include "stdafx.h"
#include <windows.h>
#include <stdio.h>

int i;

#define DATA_ARRAY_SIZE (3)

int main(void) {
	char c;
	int swap_flag;
	int swap;

	int arr[DATA_ARRAY_SIZE]; // array of data to be sorted

	for (int i = 0; i < DATA_ARRAY_SIZE; i++) {
		 scanf_s("%d", &arr[i]);
	}
	printf("Unsorted array: ");

	for (int i = 0; i < DATA_ARRAY_SIZE; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");

	while (1) {
		swap_flag = 0;
		for (i = 1; i < DATA_ARRAY_SIZE; i++) {
			if (arr[i - 1] > arr[i]) {
				swap = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = swap;
				swap_flag = 1;
			}
		}
		if (swap_flag == 0) break;
	}
	printf("Sorted array: \t");

	for (int i = 0; i < DATA_ARRAY_SIZE; i++) {
		printf("%d\t", arr[i]);
	}
	scanf_s("%c", &c);
	scanf_s("%c", &c);
}

