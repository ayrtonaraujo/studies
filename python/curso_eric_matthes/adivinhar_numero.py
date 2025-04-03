import random

num = random.randrange(1,1000)

tentativas = 1

def numUser (s):
    print(s)
    num_user = int(input("\nInsira um valor: "))
    return num_user

adivinha = numUser("Adivinhe!")

while adivinha != num:
    if adivinha< num:
        adivinha = numUser("Valor inserido está abaixo.")
        tentativas += 1
    else:
        adivinha = numUser("Valor inserido está acima.")
        tentativas += 1
        
print(f'\nVocê acertou!\nNúmero de tentativas: {tentativas}.')