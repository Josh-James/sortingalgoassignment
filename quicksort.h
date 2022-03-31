//Joshua Breedy
//Quick Sort Assignment
//
// Quick Sort header file
//
//This file defines the quick sort for the main program file.
//Quick sort uses a pivot point and partitions out the array 
//based on the part to sort the elements
//

void swap4(int* a, int* b)
{

	// declares and assigns temp as 0
	int temp = 0;

    // sets temp to a
	temp = *a;

    //sets a to b
	*a = *b;

    //sets b to temp, the previous a value
	*b = temp;
}//end of function

int partition(int A[], int start, int end)
{

    //sets the value to the last element
    int p = A[end];

    // sets the pIndex the right of position p
    int pIndex = start - 1;

    // for loop executes til the element before last
    for (int i = start; i <= (end - 1); i++)
    {

        //if statement executes if the current element is smaller
        if (A[i] < p)
        {

            //increments the pIndex
            pIndex = pIndex + 1;

            //swaps the elements to sort
            swap4(&A[pIndex], &A[i]);
        }
    }//end of for loop

    // swaps the elements to sort
    swap4(&A[pIndex + 1],&A[end]);

    // returns with the next index
    return pIndex + 1;
} //end of function

void quickSort(int A[],int left, int right)
{

    if (left < right)
    {

        // value returns with the partition's index
        int p = partition(A, left, right);

        //recursive call sets the sort for before and after the partition
        quickSort(A, left, p - 1);
        quickSort(A, p + 1, right);
    }
}//end of function