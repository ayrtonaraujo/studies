#1. Dado o tamanho da base e da altura de um retângulo,
# calcular a sua área e o seu perímetro.

altura = input("Altura:")
largura = input("Largura:")

area = float(altura) * float(largura)
pert = float(altura) * 2 + float(largura) * 2

print ('Área:', float(area), "m²")
print ("Perímetro:", float(pert), "m")