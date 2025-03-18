#4) Faça um programa que, a partir das medidas dos lados
# de um retângulo, lidos via teclado, calcule a área e o
# perímetro deste retângulo.

a = input('Altura do Retângulo: ')
b = input('Largura do Retângulo:')

area = float(a)*float(b)
per = 2*float(a) + 2*float(b)
print('A área do retângulo é: ', float(area), 'm²')
print('O perímetro do retângulo é:', float(per), 'm')