
#include "QuickSort.h"



int main()
{

  vector<int> unsortedList;



  int count [7] = {1,10,100,1000,10000, 100000, 1000000};




  for(int i = 0; i != 7; i++)
  {
        int fileNum = 3;
        int comp = 0;
        int exch = 0;
        unsortedList = readFile(fileNum);
        cout << "\n\n";
        cout << "The unsorted list is: ";
        for(int j = 0; j < unsortedList.size(); j++)
        {
          cout << unsortedList[j] << " ";
        }

        vector<int> portionList(count[i]);
        copy_n(unsortedList.begin(), count[i], portionList.begin());
        t_r_quickSort(portionList, 0, (portionList.size()-1), comp, exch);

        cout << "\n\n";
        cout << "The sorted list is: ";
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
