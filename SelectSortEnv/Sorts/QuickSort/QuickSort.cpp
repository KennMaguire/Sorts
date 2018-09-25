/*
Main File for Quick Sort
This file matches the other 3, but has its specified sort on line 46
Written By: Kenneth Maguire


*/

#include "QuickSort.h"



int main()
{

//unsortedList that will read from file
  vector<int> unsortedList;
//count is used to test the funciton at each power of ten up to 10^6
  int count [7] = {1,10,100,1000,10000, 100000, 1000000};



//this loop
  for(int i = 0; i != 7; i++)
  {
    //fileNum calls appropriate file
    //comp is for comparisons returned from function
    //exch is for exchanges returned from function
        int fileNum = 3;
        int comp = 0;
        int exch = 0;
      //calls read from file function
        unsortedList = readFile(fileNum);
        //printsthe unsorted list to confirm the list is refreshed for each iteration of the outer for loop
        cout << "\n\n";
//        cout << "The unsorted list is: ";
/*
        for(int j = 0; j < unsortedList.size(); j++)
        {
          cout << unsortedList[j] << " ";
        }
*/
        //portionList contains a slice of the unsortedList, to be passed to the sorting algorithms
        //then we can get comps and exch for each sorting algorithm at each power of 10
        vector<int> portionList(count[i]);
        copy_n(unsortedList.begin(), count[i], portionList.begin());

        //call sort function
        t_r_quickSort(portionList, 0, (portionList.size()-1), comp, exch);


        //prints the sorted list to confirm that list is sorted
        cout << "\n\n";
//        cout << "The sorted list is: " << endl;
/*
        for(int j = 0; j < portionList.size(); j++)
        {
          cout << portionList[j] << endl;
        }
*/
        cout << "\n\n";
        //this is used for later plotting and analysis
        cout << "\nThe size of the sorted list is: " << portionList.size() << endl;
        cout << "\nThe number of comparisons is: " << comp << endl;
        cout << "\nThe number of exchanges is: " << exch << endl;
        cout << "\n\n" << endl;

        cout << i << endl;
   }
        return 0;

}
