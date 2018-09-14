"""
Kenneth Maguire
SelectionSort.py
Interpretted by: Python 3.7.0
Testing with Git

Note: For comparisons, make a function so that it compares and adds to the counter
"""
import matplotlib
import matplotlib.pyplot as plt



class comparisonCounter:
    total = 0
    def __init__(self):
        self.total = 0
    def add(self, x):
        self.total += x

def comparisonAndCount(_unsortedArray, _min, _i, _comp):
    _comp.add(1)
    if(_unsortedArray[_i] < _unsortedArray[_min]):
        return True
    else:
        return False


def inputFile(_fileNum):
    path = 'data/'
    txtIndex = ['duplicate.txt', 'nearly-sorted.txt', 'nearly-unsorted.txt', 'one-million-randoms.txt', 'shuffled.txt', 'sorted.txt', 'unsorted.txt']
    #passedList = [1,3,7,8,3,5,6,7,10000,12, 14, 300,1, 1,2,12, 100, 1200, 145,1]
    f = open(path + txtIndex[_fileNum], 'r')

    #print(txtFileSelection.read())
    #next(txtFileSelection)
    passedList = []
    with f:
        next(f)         #skip header
        for line in f:
            line = line.strip()
            passedList.append(int(line))
    f.close()
    return passedList



def selectionSort(unsortedList, _comp):
    exchangeCounter = 0
    print(unsortedList)
    for j in range (0,len(unsortedList)):                                     # iterate through array starting at first element (with inner loop finding )
        min = j                                                                 # assume j is min
        for i in range(j+1, (len(unsortedList))):                               # iterate through array from next element (swaps if unsortedList[i] < unsortedList[j])
            if comparisonAndCount(unsortedList, min, i, _comp):                            #compare, and if new min found, change min index
                min = i
        if(min != j):
            exchangeCounter += 1                                                #if min is changed to new index point, swap
            unsortedList[j], unsortedList[min] = unsortedList[min], unsortedList[j]
    sortedList = unsortedList                                                   #technically both are now sorted
    print("\nThe length of the sorted list is: " + str(len(sortedList)) + "\n")
    print("The number of array assignments is: " + str(exchangeCounter) + "\n")
    print("The number of comparisons is: " + str(_comp.total) + "\n")
    return(sortedList)

#




print("Please select which file # you'd like to sort \n 1-7")

fileNum = 1         #shuffle.txt

comp = comparisonCounter()

testList = []
#inputFile(int(fileNum))
testList = inputFile(int(fileNum))
print(testList)
testListSorted = selectionSort(testList, comp)


print(testList)
