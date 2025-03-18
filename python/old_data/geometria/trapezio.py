print("Cálculo da Área de um Trapézio 🧮", '\n')

lado_maior = input('Insira o valor do Lado Maior: ')
lado_menor = input('Insira o valor do Lado Menor: ')
altura = input('Insira o valor da Altura: ')

calculo = float(lado_maior) + float(lado_menor)
calculo1 = float(calculo) * float(altura)
calculo2 = float(calculo1) / 2

print('\n', 'A área do trapézio é: ', float(calculo2), 'm²')