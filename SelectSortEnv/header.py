#Header file for SelectionSort.py
#Written by Kenneth Maguire


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

def plotCompAndExchange(_count, _exchange, _comparison):
    if _count == 1:
        print(str(_count))
        print(str(_comparison))
        print(str(_exchange) + '\n')
    elif _count == 10:
        print(str(_count))
        print(str(_comparison))
        print(str(_exchange) + '\n')
    elif _count == 100:
        print(str(_count))
        print(str(_comparison))
        print(str(_exchange) + '\n')
    elif _count == 1000:
        print(str(_count))
        print(str(_comparison))
        print(str(_exchange) + '\n')


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
