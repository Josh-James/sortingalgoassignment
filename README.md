# Sorting Assignment
This zip file contains the executeable for my sorting algorithm, the cpp file for the main program, and the header files for the sorting algorithms implemented.
## Instructions
To execute the default test array, the sortingalgo.cpp file can be compiled and executed by default to show the results following the implementation of the heap sort function on the test array. 
To show the results of the test array based on other algorithms, uncomment out the line with the algorithm name in the main function and run the file again.
To use the 10 datasets for the assignment instead, comment out lines 697-711 to stop using the test case.
After the lines are commented out, uncomment the line for the dataGenerator() function and run the cpp file. 10 txt files should now be generated. The console will now say that the file have been generated.
Next, comment out the call to the dataGenerator() function and uncomment out the line for arrayGenerator() function. The console will now say that the arrays have been generated.
To test the performance of each of the 10 datasets, go to the arrayGenerator() function and uncomment the n value for the corresponding array to get the array size. After uncommenting the n value, uncomment the multiline comment for the time and the algorithm of your choice. Run the cpp file and the time will print to console. 
When moving on to the next algorithm, put back the multiline comment. When moving to the next dataset, place the comment back on the n variable of the previous dataset.
