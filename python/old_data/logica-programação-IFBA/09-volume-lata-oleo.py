#9. Faça um algoritmo que calcule e apresente o 
# valor do volume de uma lata de óleo, dado seu raio e
# sua altura

altura = input("Altura:")
raio = input("Raio:")
pi = 3.14

volume = pi*float(raio)**2 * float(altura)

print(volume, "m³")
