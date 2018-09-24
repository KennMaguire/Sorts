#include "../../ReadFile.h"

/*
This file implements the selectionSort algorithm.
Algorithm found at the following link https://en.wikipedia.org/wiki/Selection_sort, reimplemented from SelectionSort.py


This program was comipled with c++ 14 standard
Written By: Kenneth Maguire

*/

void selectionSort(vector<int> &_unsortedList, int &_comp, int &_exch)
{
  int i = 0;
  int j = 0;
  int min = 0;




  for(j = 0; j < _unsortedList.size(); j++)
  {
      min = j;          //assume j is the smallest value
      for(i = j+1; i < _unsortedList.size(); i++)     //search array for smaller value than j
      {

          _comp += 1;
          if(_unsortedList[i] < _unsortedList[min])   //if smaller value found
          {
            min = i;                                  //set new index for smaller value
          }
      }

      if(min != j)                                    //if min isn't set to first value, then swap
      {
        _exch += 1;
        int tempInt;
        tempInt = _unsortedList[j];
        _unsortedList[j] = _unsortedList[min];
        _unsortedList[min] = tempInt;
      }


  }


}
