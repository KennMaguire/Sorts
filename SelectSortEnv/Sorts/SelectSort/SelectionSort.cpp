/*
Main File for Selection Sort
This file matches the other 3, but has its specified sort on line 45
Written By: Kenneth Maguire


*/





#include "SelectionSort.h"




int main()
{



    vector<int> unsortedList;
    vector<int> sortedList;
    int count [7] = {1,10,100,1000,10000, 100000, 1000000};

    for(int i = 0; i != 4; i++)
    {
            int fileNum = 5;
            int comp = 0;
            int exch = 0;
            unsortedList = readFile(fileNum);
            cout << "\n\n";
            cout << "The unsorted list is: " << endl;


            vector<int> portionList(count[i]);
            copy_n(unsortedList.begin(), count[i], portionList.begin());

            for(int j = 0; j < portionList.size(); j++)
            {
              cout << portionList[j] << " ";
            }

            selectionSort(portionList, comp, exch);

            cout << "\n\n";
            cout << "The sorted list is: " << endl;

            for(int j = 0; j < portionList.size(); j++)
            {
              cout << portionList[j] << endl;
            }

            cout << "\n\n";
            cout << "\nThe size of the sorted list is: " << portionList.size() << endl;
            cout << "\nThe number of comparisons is: " << comp << endl;
            cout << "\nThe number of exchanges is: " << exch << endl;
            cout << "\n\n" << endl;

            cout << i << endl;
    }



return 0;

}
