#include "search_algos.h"
/**
 * search - function that searches for a value in a sorted array of integers
 * @array: array of integers
 * @size: size of the array
 * @value: Value to search in to the array
 * Return: If the value is not present or the array is NULL, -1
 * otherwise, the index where the value is located
*/
int search(int *array, size_t size, int value)
{
	size_t a, A, i, temp;
	size_t middle;

	a = 0;
	A = size - 1;
	temp = size - 1;
	if (array == NULL)
		return (-1);
	while (a <= A && A <= temp)
	{
		middle = (a + A) / 2;
		printf("Searching in array: ");
		for (i = a; i <= A; i++)
		{
			printf("%d", array[i]);
			if (i < A)
				printf(", ");
		}
		printf("\n");
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			a = middle + 1;
		else
			A = middle - 1;
	}
	return (-1);
}

/**
 * binary_search - binary_search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: Value to search in to the array
 * Return:	If the value is not present or the array is NULL, -1
 * otherwise, the index where the value is located
*/
int binary_search(int *array, size_t size, int value)
{
	int i = 0;

	i = search(array, size, value);

	if (i >= 0 && array[i] != value)
	{
		return (-1);
	}
	return (i);
}
