#acerte o numero aleatório_chute

import random

x = random.randrange(1,10)
chute = input('Chute um número de 1 a 10:')

print('Número gerado:', x)
print('Número chutado:', chute)

if x < int(chute) :
    print('O valor chutado foi acima do valor gerado!')
elif x == int(chute):
    print('O valor chutado foi igual ao valor gerado!')
else:
    print("O valor chutado foi abaixo do valor gerado!")

if x == int(chute) :
    print('Voce acertou!')
else:
    print('Errou!')

