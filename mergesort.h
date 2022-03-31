//Joshua Breedy
//Sorting Assignment
//
// Merge Sort header file
//
//This file defines the merge sort for the main program file.
//Merge sort splits the array into smaller arrays and sorts them by combining the smaller arrays 
//based on the element value
//
void merge (int *array, int left, int mid, int right) 
{

   // sets the initial values 
   int a = 0; 
   int b = 0;
   int c = left;
   int nL;
   int nR;

   //sets the number of elements for the left array
   nL = mid - left + 1;

   //sets the number of elements for the right side array 
   nR = right - mid;

   //declares the left side of the array
   int leftArray[nL];

   //declares the right side of the array 
   int rightArray[nR];

   //sets the values for the left side of array starting with the left 
   //most element and working up to the middle
   for (a = 0; a < nL; a++){
      leftArray[a] = array[left + a];
   }

   //sets the values for the right side of array starting with the element 
   //above the middle all the way to the end
   for (b = 0; b < nR; b++)
   {
      rightArray[b] = array[mid + 1 + b];
   }

   //while loop merges the two arrays while the values are in the array's range
   while (a < nL && b < nR) 
   {

      //if statement executes when the element in the left array is smaller 
      //than the one in the right array
      if (leftArray[a] <= rightArray[b]) 
      {
         array[c] = leftArray[a];
         a++;
      }

      //else statement executes when the element in the right array is smaller 
      //than the one in the left array
      else
      {
         array[c] = rightArray[b];
         b = b + 1;
      }
      c = c + 1;
   }

   //checks for additional elements in the left array to add back into the array
   while (a < nL) 
   {
      array[c] = leftArray[a];
      a++; 
      c++;
   }

   //checks for additional elements in the right array to add back into the array
   while (b < nR) 
   {
      array[c] = rightArray[b];
      b++; 
      c++;
   }
}
void mergeSort (int *array, int l, int r) 
{
   int mid;
   if (l < r) 
   {

      //finds the middle of the array
      int mid = l + (r - l) / 2;

      //Recursive call to split the array in two
      mergeSort(array, l, mid);
      mergeSort(array, mid + 1, r);

      //Calls merge to piece the array back together
      merge(array, l, mid, r);
   }//end of if statement
}//end of function