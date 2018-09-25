import matplotlib
import matplotlib.pyplot as plt
import numpy as np


compY = [0, 27, 574, 11172, 181820, 6241419, 512901715]
exchY = [0, 22, 321, 6803, 120094, 5672294, 508136871]
#compY = [1,10,100,1000,10000,100000,1000000]
#exchY = [1,10,100,1000,10000,100000,1000000]

#compY = [0,45,4950,499500,4999500,]
#exchY = [0]
countX = [1,10,100,1000,10000,100000,1000000]






plt.figure(1)
plt.title("Exchanges for increase in N (Quick Sort)")
plt.xlabel("N")
plt.xscale('log')

plt.ylabel("Exchanges")
plt.yscale('symlog')

plt.plot(countX, exchY, 'bp-', markersize=5, label='Exchanges')
plt.figure(2)
plt.xlabel("N")

plt.xscale('log')

plt.ylabel("Comparisons")
plt.yscale("symlog")
plt.title("Comparisons for increase in N (Quick Sort)")
plt.plot(countX, compY, 'yp-', markersize=6, label='Comparisons')

plt.show()


"""

plt.figure(1)
y_pos = np.arange(len(countX))
plt.bar(y_pos, exchY, align='center', alpha= 0.5)
plt.xticks(y_pos, countX)
plt.xscale('log')
plt.yscale('log')
plt.ylabel("comparisons")
plt.title("Comparisons in Quick Sort")


plt.figure(2)
y_pos = np.arange(len(countX))
plt.bar(y_pos, compY, align='center', alpha= 0.5)
plt.xticks(y_pos, countX)
plt.xscale('log')
plt.yscale('log')
#plt.yscale('log')
plt.ylabel("comparisons")
plt.title("Comparisons in Quick Sort")
plt.show()
"""
