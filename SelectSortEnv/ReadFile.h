#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

vector<int> readFile()
{
    ifstream inFile;
    vector<int> dataSet;
    string datFiles[] = {"duplicate.txt", "nearly-sorted.txt", "nearly-unsorted.txt", "one-million-randoms.txt", "shuffled.txt", "sorted.txt", "unsorted.txt"};
    int fileNum = 5;
    string filePath = "data/" + datFiles[fileNum];

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
