#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

vector<int> readFile(int _fileNum)
{

    ifstream inFile;
    vector<int> dataSet(0);
    string datFiles[] = {"duplicate.txt", "nearly-sorted.txt", "nearly-unsorted.txt", "shuffled.txt", "sorted.txt", "unsorted.txt"};
    string filePath = "data/" + datFiles[_fileNum];   //add strings together for folder path

    cout << filePath << endl;
    inFile.open(filePath);
    //test if file failed to open
    if(inFile.fail())
    {
      cout << "file failed to open" << endl;

    }

    inFile.ignore();
    string dummyString;
    getline(inFile, dummyString); //skip first 2 lines
  //  string dummyString;
    getline(inFile, dummyString);
    //read in file into vector until the end of the file is reached
    while(!inFile.eof())
    {

        int val = -1;
        inFile >> val;

        if(val != -1)
        {
          dataSet.push_back(val);
        }
        if(inFile.eof())
        {
          break;
        }
    }

    inFile.close();
    //close file

  //  cout << dataSet.size() << endl;
  /*  for(int i = 0; i < dataSet.size(); i++)
    {
        cout << dataSet[i] << endl;

    }

*/
    //return vector
    return dataSet;




}
