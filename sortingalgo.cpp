//Joshua Breedy
//Sorting Assignment
//
// Sorting Algorithms file
//
//This file is the main program file for the sorting algorithms
//
//
#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <sstream>
#include <chrono>
using namespace std;
#include "heapsort.h"
#include "selection.h"
#include "bubble.h"
#include "insertion.h"
#include "mergesort.h"
#include "quicksort.h"

void dataGenerator()
{
    
    // sets the number of values generated to go from one to a million
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 1000000);

    //creates the file stream to be used to generate files
    ofstream genfile;

    //the values array sets the integer value size of each of the 10 arrays
    int values[] = {1000, 4000, 8000, 10000, 40000, 80000, 100000, 400000, 800000, 1000000};

    //the file array sets the naming conventions for each f the 10 arrays
    string file[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
    string name;

    //for loop generates the 10 txt files
    for (int i = 0; i < 10; i++)
    {

        //sets the name to the name given at the indec in file with the extension .txt
        name =  file[i] + ".txt";

        //opens the file
        genfile.open(name);

        //for loop populates the file with the corresponding values separated by a comma
        for (int j = 0; j < values[i]; j++){ 
            int a = dis(gen);
            genfile << a << ",\n";
        }

        //closes the file stream
        genfile.close();
    }//end of for loop

    cout << "File generation complete";
}

void arrayGenerator(){

    auto arraypop = [](int array[], string file, int size)
    {
        //declares string value
        string num;

        //sets i to 0
        int i = 0;

        //opens up the file stream
        ifstream writeFile(file);

        //while loop executes as long as there is another line in the file
        while (getline(writeFile, num))
        {

            // sets the array element at i to the integer value on the line
            array[i] = stoi(num);

            //increments i by one
            i++;
        }

        // closes the file
        writeFile.close();
    }; //end of function

    //declares array and uses arraypop function to assign values
    int a1[1000];
    arraypop(a1, "1.txt", 1000);

    //declares array and uses arraypop function to assign values
    int a2[4000];
    arraypop(a2, "2.txt", 4000);

    //declares array and uses arraypop function to assign values
    int a3[8000];
    arraypop(a3, "3.txt", 8000);

    //declares array and uses arraypop function to assign values
    int a4[10000];
    arraypop(a4, "4.txt", 10000);

    //declares array and uses arraypop function to assign values
    int a5[40000];
    arraypop(a5, "5.txt", 40000);

    //declares array and uses arraypop function to assign values
    int a6[80000];
    arraypop(a6, "6.txt", 80000);

    //declares array and uses arraypop function to assign values
    int a7[100000];
    arraypop(a7, "7.txt", 100000);

    //declares array and uses arraypop function to assign values
    int* a8 = new int[400000];
    arraypop(a8, "8.txt", 400000);

    //declares array and uses arraypop function to assign values
    int* a9 = new int[800000];
    arraypop(a9, "9.txt", 800000);

    //declares array and uses arraypop function to assign values
    int* a10 = new int[1000000];
    arraypop(a10, "10.txt", 1000000);
    cout << "Unsorted arrays generated";
    int n = 0;

    //n = sizeof(a1)/sizeof(a1[0]);
    std::chrono::time_point<std::chrono::system_clock> start, end;

    /*
    start = std::chrono::system_clock::now();
    heapSort(a1, n); // 0s, 0s, 0s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    bubble(a1, n); // 0.002993s, 0.00299s, 0.00299s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    insertion(a1, n); // 0.000997s, 0.000981s, 0.000996s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    mergeSort(a1, 0, n - 1); // 0s, 0s, 0s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    quickSort(a1, 0, n - 1); //0s, 0s, 0s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    selection(a1, n); //0.00098s, 0.000996s, 0.000999s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */
    
    // n = sizeof(a2)/sizeof(a2[0]);

    /*
    start = std::chrono::system_clock::now();
    heapSort(a2, n); //0.001s, 0s, 0.000997s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    bubble(a2, n); // 0.045837s, 0.046843s, 0.045379s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    insertion(a2, n); //0.009971s, 0.009966s, 0.010923s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    mergeSort(a2, 0, n - 1); //0s,0s,0s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    quickSort(a2, 0, n - 1); //0.001008s, 0s, 0.000997s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    selection(a2, n); //0.019015s, 0.018935s, 0.019929s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */
    
    //n = sizeof(a3)/sizeof(a3[0]);

    /*
    start = std::chrono::system_clock::now();
    heapSort(a3, n); //0.000997s, 0.001995s, 0.00195s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    bubble(a3, n); //0.189413s, 0.188749s, 0.187714s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    insertion(a3, n); //0.039867s, 0.039635s, 0.039858s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    mergeSort(a3, 0, n - 1); // 0.000996s, 0.000993s, 0.001069s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    quickSort(a3, 0, n - 1);// 0.001074s, 0.001035s, 0s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    selection(a3, n); //0.077735s, 0.076741s, 0.077636s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */
    
    //n = sizeof(a4)/sizeof(a4[0]);

    /*
    start = std::chrono::system_clock::now();
    heapSort(a4, n);// 0.001988s, 0.000994s, 0.001994s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    bubble(a4, n); //0.307371s,0.332239s,0.348749s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    insertion(a4, n); //0.06279s, 0.063175s, 0.062614s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    mergeSort(a4, 0, n - 1); //0.001941s, 0.001004s, 0.001993s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    quickSort(a4, 0, n - 1); //0.000997s, 0.001002s, 0.002026s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    selection(a4, n); // 0.174288s, 0.1206s, 0.121282s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    n = sizeof(a5)/sizeof(a5[0]);
    start = std::chrono::system_clock::now();
    heapSort(a5, n); //0.007975s, 0.009902s, 0.007955s 
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    bubble(a5, n); //6.38781s, 6.45429s, 6.47492s
    end = std::chrono::system_clock::now();
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    insertion(a5, n); //1.00654s, 1.04585s, 1.00989s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    mergeSort(a5, 0, n - 1); //1.05625s, 1.08582s, 1.04462s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    quickSort(a5, 0, n - 1); // 0.004975s, 0.008953s, 0.00498s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    selection(a5, n); //1.94204s, 1.98513s, 1.93765s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    //n = sizeof(a6)/sizeof(a6[0]);

    /*
    start = std::chrono::system_clock::now();
    heapSort(a6, n); //0.019922s, 0.019933s,0.018444s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    bubble(a6, n); //26.5102s,30.5909s, 27.2079s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    insertion(a6, n); // 3.46328s, 3.40871s, 3.38228s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    mergeSort(a6, 0, n - 1); //0.01289s, 0.010963s, 0.01097s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    quickSort(a6, 0, n - 1); //0.008966s, 0.009967s, 0.009328s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    selection(a6, n); //6.53235s, 6.49411s, 6.50468s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    //n = sizeof(a7)/sizeof(a7[0]);

    /*
    start = std::chrono::system_clock::now();
    heapSort(a7, n); //0.02093s, 0.020973s, 0.019968s 
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    bubble(a7, n); //34.8395s, 34.5278s, 34.6872s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    insertion(a7, n); //5.22135s, 5.25768s, 5.24286s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    mergeSort(a7, 0, n - 1); //0.013953s, 0.013953s, 0.013955s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    quickSort(a7, 0, n - 1); //0.011032s, 0.011892s, 0.010998s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    selection(a7, n); //10.196s, 10.1461s, 10.1269s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */
    
    //n = 400000;

    /*
    start = std::chrono::system_clock::now();
    heapSort(a8, n); //0.101727s, 0.0897s, 0.090615s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    bubble(a8, n); //582.571s, 590.343s, 583.621s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    insertion(a8, n); //85.6302s, 84.2534s, 84.5087s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    mergeSort(a8, 0, n - 1); //0.039452s, 0.042895s, 0.038624s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    quickSort(a8, 0, n - 1); //0.051826s, 0.051824s, 0.0529s 
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    selection(a8, n); //164.621s, 165.163s, 169.294s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    //n = 800000;

    /*
    start = std::chrono::system_clock::now();
    heapSort(a9, n); //0.213287s, 0.213228s, 0.207312s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    bubble(a9, n); //2346.19s, 2389.36s, 2334.12s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    insertion(a9, n); //340.715s, 346.23s, 344.78s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    mergeSort(a9, 0, n - 1); //0.2267s, 0.2731s, 0.2165s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    quickSort(a9, 0, n - 1); //0.108634s, 0.109297s, 0.114616s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    selection(a9, n); //655.461s, 649.782s, 657,342s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    //n = 1000000;

    /*
    start = std::chrono::system_clock::now();
    heapSort(a10, n); //0.317724s, 0.311405s, 0.327245s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    bubble(a10, n); //5696.23s, 5542.46s, 5714.32s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    insertion(a10, n); //462.72s, 452.45s, 464.12s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    mergeSort(a10, 0, n - 1);//0.2841s, 0.2691s, 0.2932s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    quickSort(a10, 0, n - 1); //0.167308s, 0.166448s, 0.163451s
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */

    /*
    start = std::chrono::system_clock::now();
    selection(a10, n);
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << " elapsed time: " << elapsed_seconds.count() << "s\n";
    */
}
int main(){
    // sets the test array
    int A [] = {89,373,1,783,23,987,12,65,28,17};
    int n = sizeof(A)/sizeof(A[0]);
    heapSort(A, n);
    //bubble(A, n);
    //insertion(A, n);
    //mergeSort(A, 0, n - 1);
    //quickSort(A, 0, n - 1);
    //selection(A, n);
    

    //for loop prints out the array A
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    //calls the dataGenerator function
    //dataGenerator();

    //calls the arrayGenerator function
    //arrayGenerator();
}//end of main