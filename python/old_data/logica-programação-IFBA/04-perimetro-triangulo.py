#4. Dado os três lados de um triângulo determinar o
# perímetro do mesmo.

catetoOposto = input('Cateto Oposto:')
catetoAdjacente = input('Cateto Adjacente:')
Hipotenusa = input('Hipotenusa:')

perimetro = float(catetoOposto) + float(Hipotenusa) + float(catetoAdjacente)

print ("Perímetro:", float(perimetro))