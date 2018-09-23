#include "ReadFile.h"


/*
Algorithm found at the following link https://en.wikipedia.org/wiki/Selection_sort, reimplemented from SelectionSort.py

*/

void selectionSort(vector<int> &_unsortedList, int &_comp, int &_exch)
{
  int i = 0;
  int j = 0;
  int min = 0;

//Algorithm found in

  for(j = 0; j < _unsortedList.size(); j++)
  {
      min = j;
      for(i = j+1; i < _unsortedList.size(); i++)
      {

          _comp += 1;
          if(_unsortedList[i] < _unsortedList[min])
          {
            min = i;
          }
      }

      if(min != j)
      {
        _exch += 1;
        int tempInt;
        tempInt = _unsortedList[j];
        _unsortedList[j] = _unsortedList[min];
        _unsortedList[min] = tempInt;
      }


  }


}
