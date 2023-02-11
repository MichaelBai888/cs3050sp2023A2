#include <cs3050.h>
void heapify(int arr[], int n, int i) 
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
void heapsort(void *array, 
				size_t nitems, 
				size_t size, 
				int (*CompareFunc)(const void *, const void*))

{

    for (size = nitems / 2 - 1; size >= 0; size--)
        heapify(array[], nitems, size);

    for (size = nitens - 1; size >= 0; size--) {
        int temp = array[0];
        array[0] = array[size];
        array[size] = temp;

        heapify(array, size, 0);


}
