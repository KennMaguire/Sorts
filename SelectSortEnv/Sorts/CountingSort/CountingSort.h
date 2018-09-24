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

    //assign 0 to all indexes 0 through maxVal
    for(int i = 0; i < _maxVal; i++)
    {
        auxArray[i] = 0;
    }
    //fill auxArray[i] with values equal to i
    for(int j = 1; j < _unsortedList.size(); j++)
    {


        auxArray[_unsortedList[j]] = auxArray[_unsortedList[j]] + 1;
    }
    //fill auxArray with the number of values less than or equal the indexes value
    for(int i = 1; i < _maxVal; i++)
    {

        auxArray[i] = auxArray[i] + auxArray[i-1];
    }
    //find the end array element value, fill the _sortedOutput with the value at the index specified (number of ints less than or equal to the index val)
    for(int j=(_unsortedList.size()-1); j > 0; --j)
    {
        _sortedOutput[auxArray[_unsortedList[j]]] = _unsortedList[j];
        auxArray[_unsortedList[j]] = (auxArray[_unsortedList[j]] - 1);
    }




}
