#include "ReadFile.h"

void selectionSort(vector<int> &_unsortedList, int &_comp, int &_exch)
{
  int i = 0;
  int j = 0;
  int min = 0;



  for(j = 0; j < _unsortedList.size(); j++)
  {
      min = j;
    //  cout << min << endl;
    //  cout << j << endl;
      for(i = j+1; i < _unsortedList.size(); i++)
      {
      //  cout << _unsortedList[min] << " " << _unsortedList[i] << endl;
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
