#include <iostream>
#include <vector>
using namespace std;


vector<int> selectionSort(vector<int> _unsortedList)//, int &_comp, int &_exch)
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
          if(_unsortedList[i] < _unsortedList[min])
          {
            min = i;
          }
      }

      if(min != j)
      {
        int tempInt;
        tempInt = _unsortedList[j];
        _unsortedList[j] = _unsortedList[min];
        _unsortedList[min] = tempInt;
      }


  }


  return _unsortedList;


}




int main()
{



    vector<int> unsortedList;
    vector<int> sortedList;

    for(int i = 0; i < unsortedList.size(); i++)
    {
      cout << unsortedList[i] << endl;
    }
    cout << "\n\n\n";
    sortedList = selectionSort(unsortedList);

    for(int i = 0; i < unsortedList.size(); i++)
    {
      cout << sortedList[i] << endl;
    }



return 0;

}
