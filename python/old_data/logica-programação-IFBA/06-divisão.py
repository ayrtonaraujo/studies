#6. Ler dois números inteiros e exibir o quociente
# e o resto da divisão inteira entre eles

num1 = input("Número 1:")
num2 = input("Número 2:")

divisao = int(num1) / int(num2)

print ("Quociente:", int(divisao))
print ("Resto:", int(num1) % int(num2))