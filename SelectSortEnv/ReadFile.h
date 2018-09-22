#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

vector<int> readFile(int _fileNum)
{
    ifstream inFile;
    vector<int> dataSet;
    string datFiles[] = {"duplicate.txt", "nearly-sorted.txt", "nearly-unsorted.txt", "one-million-randoms.txt", "shuffled.txt", "sorted.txt", "unsorted.txt"};
    string filePath = "data/" + datFiles[_fileNum];

    cout << filePath << endl;
    inFile.open(filePath);

    inFile.ignore();
    string dummyString;
    getline(inFile, dummyString);

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
/*
    cout << dataSet.size() << endl;
    for(int i = 0; i < dataSet.size(); i++)
    {
        cout << dataSet[i] << endl;

    }

*/
    inFile.close();
    return dataSet;



}
