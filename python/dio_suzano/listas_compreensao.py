# a compreensão de lista oferece uma sintaxe mais curta quando você deseja: criar uma nova lista com base nos valores de uma lista existente (filtro) ou gerar uma nova lista aplicando alguma modificação nos elementos de uma lista existente.

#filtro versao 1
numeros = [1,30,21,29,65,34]
pares = []
for i in numeros:
    if i % 2 == 0:
        pares.append(i)
print(pares)

#filtro versao 2 comprehsion
pares = [numero for numero in numeros if numero % 2 == 0]

print(pares)


#modificar valor versao 1
quadrado = []
for i in numeros:
    quadrado.append(i ** 2)

print(quadrado)

#modificando versao 2
quadrado = [numero ** 2 for numero in numeros]

print(quadrado)