import os
import numpy as np
import matplotlib.pyplot as plt

plt.figure()
data = np.loadtxt("metro.dat")
plt.hist(data)
plt.savefig("histo.png")