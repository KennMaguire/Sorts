/*
This file contains the countingSort algorithm. The algorithm for this function
can be found in the Intro to Algorithms txtbook by Cormen, Leiserson, Rivest, and Stein
on page 195.
This program was comipled with c++ 14 standard
Written By: Kenneth Maguire


*/



#include "../../ReadFile.h"





void countingSort(vector<int> _unsortedList, vector<int> &_sortedOutput, int _maxVal)
{
    vector<int> auxArray(_maxVal);
  //  _comp = 1;
    for(int i = 0; i < _maxVal; i++)        //assign 0 to all indexes 0 through maxVal
    {
    //   cout << "1" << endl;
        auxArray[i] = 0;
    }
    for(int j = 1; j < _unsortedList.size(); j++)
    {
    //   cout << "2" << endl;

        auxArray[_unsortedList[j]] = auxArray[_unsortedList[j]] + 1;
    }
    for(int i = 1; i < _maxVal; i++)
    {
    //   cout << "3" << endl;
        auxArray[i] = auxArray[i] + auxArray[i-1];
    }
    for(int j=(_unsortedList.size()-1); j > 0; --j)
    {
      //  cout << auxArray[_unsortedList[j]] << endl;
    //   cout << "4" << endl;

        _sortedOutput[auxArray[_unsortedList[j]]] = _unsortedList[j];
        auxArray[_unsortedList[j]] = (auxArray[_unsortedList[j]] - 1);
    }




}
