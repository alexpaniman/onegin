#ifndef SORTERS_H
#define SORTERS_H

/*
    @brief Simple bubble sort

    @param array Pointer to start of the array
    @param elemSize Size of element in array
    @param length Number of elements to sort
    @param cmp Pointer to comparator function

*/
void bubbleSort(void *array, int elemSize, int length, int (*cmp)(const void *first, const void *second));

/*
    @brief Comparator to sort array of strings (char**) using stralphacmp
*/
int stringArrayCmp(const void *firstStr, const void *secondStr);

/*
    @brief Just stralphacmp function
*/
int strvoidcmp(const void *firstStr, const void *secondStr);

#endif
