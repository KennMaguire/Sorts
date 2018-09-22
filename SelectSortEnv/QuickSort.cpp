
#include "QuickSort.h"



int main()
{

  vector<int> unsortedList;

  int comp = 0;
  int exch = 0;

//  int count [] = {1,10,100,1000,10000, 100000, 1000000};




//  for(int i = 0; i < sizeof(count); i++)
//  {
        int fileNum = 5;
        unsortedList = readFile(fileNum);


        t_r_quickSort(unsortedList, 0, (unsortedList.size()-1), comp, exch);
        for(int j = 0; j < unsortedList.size(); j++)
        {
          cout << unsortedList[j] << endl;
        }

        cout << "\nThe size of the sorted list is: " << unsortedList.size() << endl;
        cout << "\nThe number of comparisons is: " << comp << endl;
        cout << "\nThe number of exchanges is: " << exch << endl;
        cout << "\n\n" << endl;

//   }
        return 0;

}
