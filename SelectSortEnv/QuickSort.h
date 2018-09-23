#include "ReadFile.h"


int partitionQS(vector<int> &_partList, int _p, int _r, int &_comp, int &_exch);
void t_r_quickSort(vector<int> &_unsortedList, int _p, int _r, int &_comp, int &_exch);



void t_r_quickSort(vector<int> &_unsortedList, int _p, int _r, int &_comp, int &_exch)  //tail recursive quicksort, resource page 188 Algorithms textbook
{

  while(_p < _r)
  {
    int q = partitionQS(_unsortedList, _p, _r, _comp, _exch);
    t_r_quickSort(_unsortedList, _p, (q-1), _comp, _exch);
    _p = q + 1;

  }


}
int partitionQS(vector<int> &_partList, int _p, int _r, int &_comp, int &_exch)
{
    int pivot = _partList[_r];      //set pivot to last index in array
    int i = _p;                     //i will be top of i p through i
    for(int j=_p; j < _r; j++)      //in this loop, p through i are <= pivot, i through j are >= pivot, j through r are unrestricted (source pg 173 Algorithms txt)
    {
        _comp += 1;
        if(_partList[j] <= pivot)   //if partList at j is <= pivot, add it to the lower partition, i++
        {
            _exch += 1;
            int tempInt1 = 0;
            tempInt1 = _partList[i];
            _partList[i] = _partList[j];
            _partList[j] = tempInt1;
            i = i+1;
        }
    }
    _exch += 1;
    int tempInt2 = 0;           //place pivot between the two partitions
    tempInt2 = _partList[i];
    _partList[i] = _partList[_r];
    _partList[_r] = tempInt2;
    return i;

}
