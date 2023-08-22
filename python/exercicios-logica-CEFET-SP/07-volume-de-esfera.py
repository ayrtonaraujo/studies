#7) Elaborar um programa para calcular e imprimir o volume (V)
# de uma esfera e a área (A) de sua superfície, dado o valor de
# seu raio (R). A fórmula do volume da esfera é V=4/3 π R3 e da
# área é A=4π R2.

r = input('Insira o raio da esfera')
pi = 3.14
print ('O volume da esfera é:', 4/3*pi*float(r)**3)
print ('A área da esfera é:', 4*pi*float(r)**2)