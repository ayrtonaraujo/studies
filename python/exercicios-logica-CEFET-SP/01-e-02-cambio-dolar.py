#1)  Crie  um  programa  que  permita  fazer  a  conversão 
# cambial  entre  Reais  e Dólares.  Considere como taxa 
# de  câmbio  US$1,00 = R$2,40. Leia um  valor  em Reais
# pelo teclado e mostre o correspondente em Dólares

cambioDolar = 2.40
cambioReal = 1

real = input('Insira o valor em Real: ')
print ('O valor em dólares é:', float(real) * float(cambioDolar))

print ('\n')

dolar = input('Insira o valor em Dólares:')
print ('A valor em reais é:', float(cambioReal) / float(cambioDolar) * float(dolar))