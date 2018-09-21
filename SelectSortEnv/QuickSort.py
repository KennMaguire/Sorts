"""
Kenneth Maguire
SelectionSort.py
Interpreted by: Python 3.7.0

"""

import header





def quickSort(unsortedList, _comp, p, r):
    exchangeCounter = 0
    nCounter = 0
    plotArrays = header.plotCandE()
    #trying iterative since recursion causes recursion depth exceeded
    while p < r:
        q = partition(unsortedList, _comp, p, r)
        quickSort(unsortedList, _comp, p, q-1)
        p = q+1

def partition(partList, _comp, p, r):
    pivot = partList[r]
    i = p
    for j in range (p, r):
        if partList[j] <= pivot:
            partList[i], partList[j] = partList[j], partList[i]
            i = i+1
    partList[i], partList[r] = partList[r], partList[i]
    return i





#driver section (like main())


fileNum = 5 #select which data set to sort

comp = header.comparisonCounter()

testList = []


testList = header.inputFile(int(fileNum))

print(testList)

testListSorted = quickSort(testList, comp, 0, (len(testList)-1))

print(testList)
