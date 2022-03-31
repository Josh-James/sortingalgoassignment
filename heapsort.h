//Joshua Breedy
//Sorting Assignment
//
// Heap Sort header file
//
//This file defines the heap sort for the main program file.
//Heap sort compares the root value to other elements and sorts the array 
//starting at the minimum element until the array is sorted completely
//

void swap1 (int* a, int* b)
{

	// declares and assigns temp as 0
	int temp = 0;

    // sets temp to a
	temp = *a;

    //sets a to b
	*a = *b;

    //sets b to temp, the previous a value
	*b = temp;
}
void heapify (int A[], int n, int i)
{

    //sets the max to the root element (middle)
    int max = i;

    // sets the left child node index
    int left = 2 * i + 1;

    // sets the right child node index
    int right = 2 * i + 2;

    // if statement executes when the index is less than the heapsize and 
    // when the left child node value is greater than the max value
    if ((left < n) && (A[max] < A[left]))
    {
        max = left;
    }

    // if statement executes when the index is less than the heapsize and 
    // when the right child node value is greater than the max value
    if ((right < n) && (A[max] < A[right]))
    {
        max = right;
    }

    // if statement executes when the maximum value is not the default i
    if (max != i)
    {
        swap1(&A[i], &A[max]);

        // recursive call to check the next set of elements
        heapify(A,n, max);
    }
}
void heapSort (int A[], int n)
{

    // heapsize set to n
    int heapsize = n;

    // arranges the values in the array
    for (int i = heapsize/2 - 1; i >= 0; i--)
    {
        heapify(A, heapsize, i);
    }

    //swaps elements in the heap
    for (int i = heapsize - 1; i > 0; i--)
    {
        swap1(&A[0], &A[i]);

        // recursive call to decrease the heapsize
        heapify(A, i, 0);
    }
}//end of function