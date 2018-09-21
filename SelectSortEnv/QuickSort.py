"""
Kenneth Maguire
SelectionSort.py
Interpreted by: Python 3.7.0

"""

import header





def quickSort(unsortedList, _comp, _exch, _nCount, p, r):
    while p < r:
        q = partition(unsortedList, _comp, _exch, p, r)
        if(q-p < r-q):                                      #was dealing with recursion depth issues and found help at https://www.geeksforgeeks.org/quicksort-tail-call-optimization-reducing-worst-case-space-log-n/
            quickSort(unsortedList, _comp, _exch, _nCount, p, q-1)          #originally used the tail recursive-quicksort from the textbook, but found that I still hit max recursion depth
            p = q+1                                         #the if else method here works well because it only recursively calls whichever part (lower or higher) becomes smaller after partition
        else:
            quickSort(unsortedList, _comp, _exch, _nCount, q+1, r)
            r = r-1




    return unsortedList




def partition(partList, _comp, _exch, p, r):
    pivot = partList[r]
    i = p
    for j in range (p, r):
        if header.comparisonAndCountQS(partList, j, pivot, _comp):
            _exch.add(1)
            partList[i], partList[j] = partList[j], partList[i]
            i = i+1
    _exch.add(1)
    partList[i], partList[r] = partList[r], partList[i]
    return i





#driver section (like main())


fileNum = 0 #select which data set to sort

comp = header.comparisonCounter()

exch = header.exchangeCounter()

nCount = header.nCounter()

testList = []

""" logic for keeping compare and exchange count


Since the quicksort function is recursive, there's no great way to keep track of how exchange and compare happen as n grows

Get plot point after each amount 1, 10, 100, 1000, 10000, 100000, 1000000

append to array, keep normal terminology from header function.


"""

plotArrays = header.plotCandE()

testList = header.inputFile(int(fileNum))

print(testList)




""" I'm looping through the following section to get the number of comparisons and exchanges for each
    power of 10 up to 1000000
"""


count = [1,10,100,1000,10000, 100000, 1000000]
testListSorted = []
testListLength = len(testList)

print(len(testList))
print(count)
for i in count:
    print(i)
    if i <= len(testList):
        testList = range(i)
        testListSorted = quickSort(testList, comp, exch, nCount, 0, (len(testList)-1))
        plotArrays.countX.append(i)
        plotArrays.exchY.append(exch.total)
        plotArrays.compY.append(comp.total)
        testList = range(testListLength)
        print("\nThe length of the sorted list is: " + str(len(testListSorted)) + "\n")
        print("The number of array assignments is: " + str(exch.total) + "\n")
        print("The number of comparisons is: " + str(comp.total) + "\n")
        print("\n\n")




"""The following section is only for plotting the function"""


header.plt.figure(1)
header.plt.title("Exchanges for increase in N")
header.plt.plot(plotArrays.countX, plotArrays.exchY, 'bp-', markersize=5, label='Exchanges')
header.plt.figure(2)
header.plt.title("Comparisons for increase in N")
header.plt.plot(plotArrays.countX, plotArrays.compY, 'yp-', markersize=5, label='Comparisons')
header.plt.show()



print(testListSorted)
