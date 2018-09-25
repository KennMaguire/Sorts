/*
Main File for Selection Sort
This file matches the other 3, but has its specified sort on line 45
Written By: Kenneth Maguire


*/





//#include "SelectionSort.h"
#include "../QuickSort/QuickSort.h"



int main()
{



    vector<int> unsortedList;
    vector<int> sortedList;
    //int count [7] = {1,10,100,1000,10000, 100000, 1000000};

    for(int i = 0; i != 6; i++)
    {
          //  int fileNum = 3;
            int comp = 0;
            int exch = 0;
            unsortedList = readFile(i);
            cout << "\n\n";
            cout << "The unsorted list is: " << endl;


        //    vector<int> portionList(count[i]);
      //      copy_n(unsortedList.begin(), count[i], portionList.begin());
/*
            for(int j = 0; j < unsortedList.size(); j++)
            {
              cout << unsortedList[j] << " ";
            }
*/
          //  selectionSort(unsortedList, comp, exch);
            t_r_quickSort(unsortedList, 0, (unsortedList.size()-1), comp, exch);

            vector<int> sortedList(1000);
      //      countingSort(unsortedList, sortedList, 1001, exch);
            cout << "\n\n";
            cout << "The sorted list is: " << endl;
/*
            for(int j = 0; j < unsortedList.size(); j++)
            {
              cout << unsortedList[j] << endl;
            }
*/
            cout << "\n\n";
            cout << "\nThe size of the sorted list is: " << unsortedList.size() << endl;
            cout << "\nThe number of comparisons is: " << comp << endl;
            cout << "\nThe number of exchanges is: " << exch << endl;
            cout << "\n\n" << endl;

            cout << i << endl;
    }



return 0;

}
