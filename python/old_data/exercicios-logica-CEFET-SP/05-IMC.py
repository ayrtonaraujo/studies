#5) A condição física de uma pessoa pode ser medida com base no
# cálculo do IMC, Índice de Massa Corporal, o qual é calculado
# dividindo-se a massa da pessoa (m em kg) pela altura da mesma
# (h em m) elevada ao quadrado (IMC= m/h²). Escreva um programa
# que leia a massa e a altura de uma pessoa, calcule e mostre o IMC.


massa = input('Seu peso em Kg:')
alt = input('Sua altura em cm:')
alt2 = float(alt)**2
imc = float(massa) / float(alt2) *10000


print ('Seu IMC é de:', imc)

if float(imc) <= 18.5:
    print ('MAGREZA')
elif 18.5 <= float(imc) <= 24.9:
    print('NORMAL')
elif 25.0 <= float(imc) <= 29.9:
    print('SOBREPESO')
elif 30.0 <= float(imc) <= 39.9:
    print ('OBESIDADE')
else:
    print('OBESIDADE GRAVE')