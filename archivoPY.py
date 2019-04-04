import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ Metropolis.cpp -o Metropolis.x")
os.system("./Metropolis.x > datos.dat")

data = np.loadtxt("datos.dat")

plt.figure()
plt.hist(data,bins=50)
plt.savefig("datos.png")