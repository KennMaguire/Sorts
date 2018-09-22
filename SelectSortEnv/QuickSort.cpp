
#include "QuickSort.h"



int main()
{

  vector<int> unsortedList;
  vector<int> sortedList;
  int comp = 0;
  int exch = 0;





  unsortedList = readFile();
  sortedList = quickSort(unsortedList, comp, exch);


  for(int i = 0; i < unsortedList.size(); i++)
  {
    cout << unsortedList[i] << endl;
  }

  return 0;

}
