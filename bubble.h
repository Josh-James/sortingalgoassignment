//Joshua Breedy
//Sorting Assignment
//
// Bubble Sort header file
//
//This file defines the bubble sort for the main program file.
//Bubble sort compares two values and move the largest element 
//to the top and sorts based on which element is larger
//

// The swap3 function swaps the value for a and b by using a temporary value
void swap3 (int* a, int* b)
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

//The bubble function sorts by swapping values based on the value size
void bubble (int A[], int n)
{

    // The first for loop is used to set the number of comparisons
	for (int i = 1; i < n-1; i++){

        //The second for loop 
		for (int j = 0; j < n-1; j++)
		{

            // if statement is used to swap the two eleents if the former is greater 
            //than the latter
			if(A[j] > A[j+1])
			{
				swap3(&A[j], &A[j+1]);
			}
		}
	}
}