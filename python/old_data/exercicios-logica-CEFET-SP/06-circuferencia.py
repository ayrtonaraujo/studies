#6)  Dado  o  valor  do  raio  (r)  de  uma  circunferência,
#  elaborar  um  programa  para calcular e imprimir sua área (A)
# e o seu comprimento (C). A fórmula da área do círculo é A=π r2
# e do comprimento é C=2π r.

r = input('Qual o raio da circuferência:')
pi = 3.14

print('A área da circunferência é:', pi * float(r)**2)
print('O comprimento da circuferência é:', 2 * pi * float(r)**2)