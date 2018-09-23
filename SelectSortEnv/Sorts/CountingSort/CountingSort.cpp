/*
Main File for Quick Sort
This file matches the other 3, but has its specified sort on line 38
Written By: Kenneth Maguire

This file runs the code for each input of n = n^0 through n^6.
Since the sort doesn't use comparisons or exchanges, they are not accounted for.
*/



#include "CountingSort.h"

int main()
{
  vector<int> unsortedList;



  int count [7] = {1,10,100,1000,10000, 100000, 1000000};




  for(int i = 0; i != 7; i++)
  {
        int fileNum = 3;
        int exch = 0;
        int maxVal = 1001;
        unsortedList = readFile(fileNum);

        cout << unsortedList.size() << endl;
        cout << "\n\n";
        cout << "The unsorted list is: ";
        for(int j = 0; j < unsortedList.size(); j++)
        {
          cout << unsortedList[j] << " ";
        }
        vector<int> sortedList(count[i]);
        vector<int> portionList(count[i]);
        copy_n(unsortedList.begin(), count[i], portionList.begin());
        countingSort(portionList, sortedList, maxVal);

        cout << "\n\n";
        cout << "The sorted list is: " << endl;
        for(int j = 0; j < portionList.size(); j++)
        {
          cout << sortedList[j] << endl;
        }
        cout << "\n\n";
        cout << "\nThe size of the sorted list is: " << portionList.size() << endl;
      //  cout << "\nThe number of comparisons is: " << comp << endl;
    //    cout << "\nThe number of exchanges is: " << exch << endl;
        cout << "\n\n" << endl;

    //    cout << i << endl;
   }




        return 0;



}
