//Joshua Breedy
//Sorting Assignment
//
// Insertion Sort header file
//
//This file defines the insertion sort for the main program file.
//Insertion sort splits the array into sorted and unsorted sections 
//scanning the unsorted values for placement into the sorted section
//

void insertion (int A[], int n)
{
    int value, space;

	for (int i = 1; i < n; i++){

        //assigns the value to be compared as i
		value = A[i];

        // sets the previous element as the element to be compared to
        space = i - 1;
        
        // loop executes as long as the previous value index is greater than the current value
        while (space >= 0 && A[space] > value)
        {

            //assigns the next value to the value of space
            A[space + 1] = A[space];
            
            // decrements the index of space
            space = space - 1;
        }

        // assigns the next element as value
        A[space + 1] = value;
    }// end of for loop
}// end of function