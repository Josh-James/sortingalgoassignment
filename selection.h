//Joshua Breedy
//Sorting Assignment
//
// Selection Sort header file
//
//This file defines the selection sort for the main program file.
//Selection sort gets the smallest value from the unsorted array and 
//places it at the beginning of the array
//

void swap2 (int* a, int* b)
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

void selection (int A[], int n)
{

	//for loop sets the range for search
	for (int i = 0; i < n-1; i++)
	{

		// sets the minimum element
		int min = i;

		//for statement applies for the second element being compared
		for (int j = i + 1; j < n; j++)
		{

			//if statement sets the element at j as minimum if it is less than the given minimum
			if (A[j] < A[min])
			{
				min = j;
			}
		}

		//swaps the minimum element with the first element
		swap2(&A[min], &A[i]);
	}//end of for loop
}// end of function